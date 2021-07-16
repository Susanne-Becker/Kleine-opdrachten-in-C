//2.2 zwartrijden2

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

void calculate(float number);

int main(void)
{
    float pakkans[] = {0.02, 0.03, 0.04, 0.05};
    
    for (int i = 0; i < 4; i++){
        calculate(pakkans[i]);
    }
}

void calculate(float number)
{
    float procentueel_tarief = (2.25 + 60) * number;

    float berekening1 = 2.25 / 100.0;
    float berekening = procentueel_tarief / berekening1;
    
    int n = number * 100;
     
    printf("Procentueel betaal elke rit je met een pakkans van %i ", n);
    printf("procent: %.2f euro \n", procentueel_tarief);
    printf("Procentueel is dat: %.2f procent van het normale tarief \n", berekening);
    printf("\n");
}

