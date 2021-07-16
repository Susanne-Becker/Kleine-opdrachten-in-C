//1.3 zwartrijden

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //input van de gebruiker
    int km = get_int("Aantal kilometers treinreis: ");

    int pakkans = get_int("Hoeveel procent pak kans: ");

    //berekeningen
    float normaal_tarief = 0.2 * km;
    float boete_tarief = (0.2 * km) + 3.5;

    float procent = pakkans * 0.01;

    float procentueel_tarief = ((0.2 * km) + 3.5) * procent;

    float berekening1 = normaal_tarief * 0.01;
    float berekening2 = procentueel_tarief / berekening1;

    //print
    printf("\n");
    printf("Normaal betaal je: %.2f euro \n", normaal_tarief);
    printf("Wanneer je gepakt bent betaal je: %.2f euro \n", boete_tarief);
    printf("Gemiddeld betaal je met de ingevulde pakkans per rit: %.2f euro \n", procentueel_tarief);
    printf("Procentueel is dat: %.2f procent van het normale tarief \n", berekening2);
}