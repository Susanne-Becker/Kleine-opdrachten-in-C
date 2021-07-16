#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int cent;
    int coins = 0;

    //do en while loop. change wordt door de gebruiker ingevuld, het mag een komma getal zijn.
    //round rond change af. do loop wordt herhaald als change een negatief getal is
    do
    {
        change = get_float("Change: ");
        cent = round(change * 100);
    }
    while (change < 0.0);

    //while loop: is coins groter of gelijk aan 25, haal er 25 van af en doe coins++.
    //Herhaal dit tot het niet meer mogelijk is, ga dan naar volgende while loop
    while (cent >= 25)
    {
        cent = cent - 25;
        coins++;
    }

    //while loop: is coins groter of gelijk aan 10 en kleiner dan 25, haal er 10 van af en doe coins++.
    //Herhaal dit tot het niet meer mogelijk is, ga dan naar volgende while loop
    while (cent >= 10 && cent < 25)
    {
        cent = cent - 10;
        coins++;
    }

    //while loop: is coins groter of gelijk aan 5 en kleiner dan 10, haal er 5 van af en doe coins++.
    //Herhaal dit tot het niet meer mogelijk is, ga dan naar volgende while loop
    while (cent >= 5 && cent < 10)
    {
        cent = cent - 5;
        coins++;
    }

    //while loop: is coins groter of gelijk aan 1 en kleiner dan 5, haal er 1 van af en doe coins++.
    //Herhaal dit tot het niet meer mogelijk is, ga dan naar volgende while loop
    while (cent >= 1 && cent < 5)
    {
        cent = cent - 1;
        coins++;
    }
    //print aantal coins uit
    printf("%i\n", coins);
}