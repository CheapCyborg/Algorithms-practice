#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Enter amount of minutes you took in the shower today. ");
    int minutes = get_int();
    printf("Minutes: %d\n", minutes);
    int bottles = minutes * 192 / 16;
    printf("Bottles: %d\n", bottles);
}
