#include <stdio.h>
#include <ctype.h>

char* cryptogram_result = "";
char* message_result = "";

char* encrypt_vigenere(char key[], char message[]) {
int messageLen = strlen(message);
int keyLen = strlen(key);
char encryptedMessage[messageLen];
char currentChar = "";
int i = 0;

for (i = 0; i < messageLen+1; i++) {
    currentChar = message[i];
    if (isalpha(currentChar)) {
        char keyChar = key[i % keyLen];
        keyChar = toupper(keyChar);
        if (islower(currentChar)) {
            currentChar = (currentChar - 'a' + keyChar - 'A') % 26 + 'a';
        } else {
            currentChar = (currentChar - 'A' + keyChar - 'A') % 26 + 'A';
        }
    }
    encryptedMessage[i] = currentChar;
}

    cryptogram_result = encryptedMessage;
    return cryptogram_result;
}

char* decrypt_vigenere(char key[], char cryptogram[]) { 
    int ciphertextLen = strlen(cryptogram);
    int keyLen = strlen(key);
    char decryptedMessage[ciphertextLen];

    for (int i = 0; i < ciphertextLen+1; i++) {
        char currentChar = cryptogram[i];
        if (isalpha(currentChar)) {
            char keyChar = key[i % keyLen];
            keyChar = toupper(keyChar);

            if (islower(currentChar)) {
                currentChar = (currentChar - keyChar + 26) % 26 + 'a';
            } else {
                currentChar = (currentChar - keyChar + 26) % 26 + 'A';
            }
        }
        decryptedMessage[i] = currentChar;
    }

    message_result = decryptedMessage;
    return message_result;
}