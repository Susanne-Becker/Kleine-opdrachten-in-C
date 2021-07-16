#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int i;
    int space;
    int hashes;

    //do en while loop om de hoogte te bepalen.
    //Je vraagt aan de gebruiker de hoogte, als deze kleiner is dan 8 en groter dan 1 ga je door, anders wordt de do loop herhaald
    do
    {
        height = get_int("Height: ");

    }
    while (height > 8 || height < 1);

    //for loop, ga door totdat je hoogte hebt bereikt
    for (i = 0; i < height; i++)
    {
        //space is high min i, dus bij een hoogte van 8 is de eerste aantal spaces 7 (8-1). Space wordt steeds 1 minder
        for (space = height - i; space > 1; space--)
        {
            printf(" ");
        }
        //Hashes worden steeds 1 meer
        for (hashes = 0; hashes < i + 1; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}