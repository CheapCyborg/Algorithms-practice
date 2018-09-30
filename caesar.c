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
    else {
        
    int key = atoi(argv[1]);
    if (key <= 0) {
        printf("Enter a valid key\n");
        return 1;
    }
    printf("plaintext: ");
    string plaintext = get_string();
    
    if (plaintext != '\0') {
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++) {
            
            if islower(plaintext[i])
                printf("%c", (((plaintext[i] + key) - 97) % 26) + 97);
            
            else if isupper(plaintext[i])
                printf("%c", (((plaintext[i] + key) - 65) % 26) + 65);
            
            else
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }   
}