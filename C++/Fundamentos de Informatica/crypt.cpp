#include <iostream>
#include <string>

// Function to encrypt a message and generate a key
void encryptMessage(std::string &message, const std::string &key)
{
    size_t messageLen = message.length();
    size_t keyLen = key.length();

    for (size_t i = 0; i < messageLen; i++)
    {
        message[i] = message[i] ^ key[i % keyLen];
    }
}

// Function to decrypt a message using the provided key
void decryptMessage(std::string &message, const std::string &key)
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
    std::string message;
    std::string key;

    std::cout << "Enter a message: ";
    std::getline(std::cin, message);

    std::cout << "Enter a key for encryption: ";
    std::getline(std::cin, key);

    // Encrypt the message
    std::string encryptedMessage = message;
    encryptMessage(encryptedMessage, key);

    std::cout << "Encrypted message: " << encryptedMessage << std::endl;

    std::cout << "\nEnter encrypted message: ";
    std::getline(std::cin, encryptedMessage);

    std::cout << "Enter the key: ";
    std::getline(std::cin, key);

    // Decrypt the message
    decryptMessage(encryptedMessage, key);

    std::cout << "Decrypted message: " << encryptedMessage << std::endl;

    return 0;
}
