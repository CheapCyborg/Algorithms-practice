#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string name = get_string();
    int i = 0;
    
    printf("%c", toupper(name[0]));
    while (name[i] != '\0') {
       if (name[i] == ' ') {
            i++;
            printf("%c", toupper(name[i]));
       }
       
       i++;
    }
    printf("\n");
}