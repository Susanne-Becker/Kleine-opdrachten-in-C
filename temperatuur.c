// 3.1 temperatuur
#include <stdio.h>
#include <cs50.h>

#define N 29

int main(void)
{
    // Celsius is al gegeven
    int celsius[N] = {-40, -35, -30, -25, -20, -15, -10, -5, 0, 5, 10,
        15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};

    int fahrenheit[N];
    int kelvin[N];


    // Fahrenheit berekenen (F=(18c +320)/10
    for(int i = 0; i < N; i++)
    {
        fahrenheit[i] = ((18 * celsius[i]) + 320) / 10;
    }

    // Kelvin berekenen (K = 273+C)
     for(int i = 0; i < N; i++)
    {
        kelvin[i] = 273 + celsius[i];
    }

    //print
    printf(" Kelvin | Celsius | Fahrenheit\n");
    printf("--------+---------+---------\n");
    for(int i = 0; i < N; i++)
    {
        printf("  %i   |   %3i   |  %i \n", kelvin[i],
            celsius[i], fahrenheit[i]);
    }
}