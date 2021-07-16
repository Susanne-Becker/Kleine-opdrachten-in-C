#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int bandplakken = 15;
    float buitenband = 17.5;
    int binnenband = 7;
    
    int km = get_int("Hoeveel km heb je gefietst? ");
    
    int plakken = km / 75;
    float europlakken = plakken * 15.0;
    
    int vervangen = km / 1000;
    float eurobinnen =  (vervangen * 7.0);
    float eurobuiten = (vervangen * 17.5);
    
    float totale_kosten = europlakken + eurobinnen + eurobuiten;
    
    printf("Totale kosten: %.2f euro \n", totale_kosten);
    printf("Kosten binnenband: %.2f euro \n", eurobinnen);
    printf("Kosten buitenband: %.2f euro \n", eurobuiten);
    printf("Kosten band plakken: %.2f euro \n", europlakken);
}