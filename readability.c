/***
 * readability.c
 *
 * bepaal het leesniveau van een bepaalde tekst
 *
 * Gemaakt door: Susanne Becker
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    //input van de gebruiker
    string s = get_string("Text: ");

    //letters,words en sentences initialiseren. Words begint bij 1, omdat je aantal spaties berekent en achter spatie staat nog een woord.
    int letters = 0;
    int words = 1;
    int sentences = 0;

    //bereken hoeveel letters, woorden en zinnen er in de input van de gebruiker staat.
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            letters++;
        }
        if (s[i] == ' ')
        {
            words++;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            sentences++;
        }
    }

    //berekenen aantal letters en zinnen per 100 woorden.
    float L = ((float)letters / words) * 100.0;
    float S = ((float)sentences / words) * 100.0;

    //index berekenen en afronden.
    float index = (0.0588 * L) - (0.296 * S) - 15.8;
    int grade = round(index);

    //resultaat geven aan gebruiker
    if (grade >= 1 && grade <= 16)
    {
        printf("Grade %i\n", grade);
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
}