#include <iostream>
#include <string>

using namespace std;

// Function to encrypt a message and generate a key
void encryptMessage(string &message, const string &key)
{
    size_t messageLen = message.length();
    size_t keyLen = key.length();

    for (size_t i = 0; i < messageLen; i++)
    {
        message[i] = message[i] ^ key[i % keyLen];
    }
}

// Function to decrypt a message using the provided key
void decryptMessage(string &message, const string &key)
{
    size_t messageLen = message.length();
    size_t keyLen = key.length();

    for (size_t i = 0; i < messageLen; i++)
    {
        message[i] = message[i] ^ key[i % keyLen];
    }
}

int main()
{
    string message;
    string key;

    cout << "Enter a message: ";
    getline(cin, message);

    cout << "Enter a key for encryption: ";
    getline(cin, key);

    // Encrypt the message
    string encryptedMessage = message;
    encryptMessage(encryptedMessage, key);

    cout << "Encrypted message: " << encryptedMessage << endl;

    cout << "\nEnter encrypted message: ";
    getline(cin, encryptedMessage);

    cout << "Enter the key: ";
    getline(cin, key);

    // Decrypt the message
    decryptMessage(encryptedMessage, key);

    cout << "Decrypted message: " << encryptedMessage << endl;

    return 0;
}
