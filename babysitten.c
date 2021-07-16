//2.1 babysitten

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //input van de gebruiker
    int aankomst = get_float("Tijd van aankomst: ");

    float vertrek = get_float("Tijd van vertrek: ");
    if (vertrek > 0 && vertrek < 1)
    {
        vertrek = 1;
    }
    if (vertrek > 1 && vertrek < 2)
    {
        vertrek = 2;
    }
    if (vertrek > 2 && vertrek < 3)
    {
        vertrek = 3;
    }

    //prijs voor 12 uur 's nachts berekenen
    int tijd1 = 12 - aankomst;
    int prijs1 = tijd1 * 6;

    //prijs na 12 uur 's nachts berekenen
    int prijs2 = vertrek * 10;

    int verdient = prijs1 + prijs2;

    //print
    printf("Je hebt: %i euro verdient.\n", verdient);
}