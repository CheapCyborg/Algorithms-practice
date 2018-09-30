#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do {
    printf("Enter height for pyramid: ");
    height = get_int();
    } while (height > 23 || height <= 0);

    //Controls the rows/columns
    for (int i = 0; i < height; i++)
    {
      for (int space = 0; space < height - i - 1; space++)
      {
        printf("%s", " ");
      }

      for (int j = 0; j < i + 2; j++)
      {
        printf("#");
      }

      printf("\n");
    }
}