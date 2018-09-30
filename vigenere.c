#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
      if (argc != 2) {
        printf("Enter a valid key\n");
        return 1;
    }
    string key = argv[1];
    int keylength = strlen(key);

    for (int i = 0; i < keylength; i++) {
        if (!isalpha(key[i])) {   
            printf("Usage: ./vigenere <key>\n");
            printf("Make sure to use only alphabetic characters\n");
            return 1;
        }
    }
    for (int i = 0; i < keylength; i++) {
        if (islower(key[i])) {
            key[i] = key[i] - 'a';
        }
        else if (isupper(key[i])) {
             key[i] = key[i] - 'A';
         }
    }
    printf("plaintext: ");
    string plaintext = get_string();
    int n = strlen(plaintext);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (isalpha(plaintext[i])) {
            if islower(plaintext[i]) {
                plaintext[i] = ((plaintext[i] - 'a') + (key[j % keylength])) % 26 + 'a';
            }
            else if isupper(plaintext[i]) {
                plaintext[i] = ((plaintext[i] - 'A') + (key[j % keylength])) % 26 + 'A';
            }
            j++;
        }
        else {
            plaintext[i] = plaintext[i];
        }
    }
    printf("ciphertext: %s\n", plaintext);
    return 0;
}