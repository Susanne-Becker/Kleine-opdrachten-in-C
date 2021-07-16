//3.2 spraaksynthese
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    string s = get_string("Welk nummer wil je printen: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        int a = s[i];

        if(a == 48)
        {
            printf("nul\n");
        }
        if(a == 49)
        {
            printf("een\n");
        }
        if(a == 50)
        {
            printf("twee\n");
        }
        if(a == 51)
        {
            printf("drie\n");
        }
        if(a == 52)
        {
            printf("vier\n");
        }
        if(a == 53)
        {
            printf("vijf\n");
        }
        if(a == 54)
        {
            printf("zes\n");
        }
        if(a == 55)
        {
            printf("zeven\n");
        }
        if(a == 56)
        {
            printf("acht\n");
        }
        if(a == 57)
        {
            printf("negen\n");
        }
    }
}