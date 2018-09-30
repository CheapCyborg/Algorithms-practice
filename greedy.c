#include <cs50.h>
#include<stdio.h>

int main(void)
{
    float changeOwed;
    do {
    printf("How much change is owed");
    changeOwed = get_float();
    } while(changeOwed < 0);

    int x = changeOwed*100;
    int changeCount = 0;

    while(x >= 25)
    {
        x = x - 25;
        changeCount++;
    }

    while( x >= 10)
    {
        x = x - 10;
        changeCount++;
    }

    while( x >= 5)
    {
        x = x - 5;
        changeCount++;
    }

    while( x >= 1)
    {
        x = x - 1;
        changeCount++;
    }

     printf("%i\n", changeCount);
}