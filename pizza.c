#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float basisprijs = 3.5;

    int pizzacm = get_int("Hoe groot wil je je pizza hebben (in cm)? ");
    float pizzadm = (pizzacm / 2) / 10.0;
    
    float pizza2 = pizzadm * pizzadm;
    float pizzaoppervlakte = pizza2 * 3.14;
    
    float pizzabodem = 3.5 + (1.0 * pizzaoppervlakte);
    
    int ingredienten = get_int("Hoeveel ingredienten wil je hebben? ");
    
    float ingredientenprijs = 0.10 * ingredienten * pizzaoppervlakte;
    
    float prijspizza = pizzabodem + ingredientenprijs;

    printf("Totale kosten: %.2f euro \n", prijspizza);
    printf("Kosten pizzabodem: %.2f euro \n", pizzabodem);
    printf("Kosten ingredienten: %.2f euro \n", ingredientenprijs);
}