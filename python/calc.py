from cprint import cprint
import os

# Program to make a simple calculator

# This function adds two numbers
def add(x, y):
    return x + y

# This function subtracts two numbers
def subtract(x, y):
    return x - y

# This function multiplies two numbers
def multiply(x, y):
    return x * y

# This function divides two numbers
def divide(x, y):
    return x / y

cprint(''' /$$$$$$$              /$$     /$$                                                      
| $$__  $$            | $$    | $$                                                      
| $$  \ $$ /$$   /$$ /$$$$$$  | $$$$$$$   /$$$$$$  /$$$$$$$                             
| $$$$$$$/| $$  | $$|_  $$_/  | $$__  $$ /$$__  $$| $$__  $$                            
| $$____/ | $$  | $$  | $$    | $$  \ $$| $$  \ $$| $$  \ $$                            
| $$      | $$  | $$  | $$ /$$| $$  | $$| $$  | $$| $$  | $$                            
| $$      |  $$$$$$$  |  $$$$/| $$  | $$|  $$$$$$/| $$  | $$                            
|__/       \____  $$   \___/  |__/  |__/ \______/ |__/  |__/                            
           /$$  | $$                                                                    
          |  $$$$$$/                                                                    
           \______/                                                                     
  /$$$$$$            /$$                     /$$             /$$                        
 /$$__  $$          | $$                    | $$            | $$                        
| $$  \__/  /$$$$$$ | $$  /$$$$$$$ /$$   /$$| $$  /$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$ 
| $$       |____  $$| $$ /$$_____/| $$  | $$| $$ |____  $$|_  $$_/   /$$__  $$ /$$__  $$
| $$        /$$$$$$$| $$| $$      | $$  | $$| $$  /$$$$$$$  | $$    | $$  \ $$| $$  \__/
| $$    $$ /$$__  $$| $$| $$      | $$  | $$| $$ /$$__  $$  | $$ /$$| $$  | $$| $$      
|  $$$$$$/|  $$$$$$$| $$|  $$$$$$$|  $$$$$$/| $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$      
 \______/  \_______/|__/ \_______/ \______/ |__/ \_______/   \___/   \______/ |__/      
                                                                                                                                                   
                                                                                        

''',c='r')

# Operator List
opList = [
"   1.Add",
"   2.Subtract",
"   3.Multiply",
"   4.Divide"]

cprint("LIST OF OPERATORS.", c='g')
cprint(
    opList[0] + "\n" +
    opList[1] + "\n" +
    opList[2] + "\n" +
    opList[3],
    c = "b"
)

while True:
    # take input from the user
    print("\n")
    cprint("Enter operator of choice (1,2,3,4): ", c='g')
    choice = input("")
    

    # check if choice is one of the four options
    if choice in ('1','2','3','4'):
        cprint("Enter first value: ", c='b')
        num1 = float(input(""))
        cprint("Enter second value: ", c='b')
        num2 = float(input(""))

        if choice == '1':
            print(num1, "+", num2, "=", add(num1, num2))

        elif choice == '2':
            print(num1, "-", num2, "=", subtract(num1, num2))

        elif choice == '3':
            print(num1, "*", num2, "=", multiply(num1, num2))

        elif choice == '4':
            print(num1, "/", num2, "=", divide(num1, num2))
        
        # check if user wants another calculation
        # break the while loop if answer is no
        next_calculation = ''
        while (next_calculation != 'n'):
            print("\n")
            next_calculation = input("Do you wish to continue using Python Calculator? (y/n): ")
            if next_calculation in ('y','n'):
                if next_calculation == "y":
                    break
            else:
                print("\n"*100)
                cprint("Invalid Input", c = "r")
        else:
            print("Goodbye. See you soon!")
            break
            
    else:
        print("\n"*100)
        cprint("Invalid Input", c = "r")