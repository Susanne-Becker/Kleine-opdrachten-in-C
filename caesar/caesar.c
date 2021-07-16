/***
 * caesar.c
 *
 * Verander de ingevulde tekst (input) in ciphertext, hoofdletters blijven hoofdletters en lage letters blijven lage letters.
 * Bepaal allereerst met hoeveel karakters je de text wilt veranderen en vul dan de text in.
 *
 * Gemaakt door: Susanne Becker
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    //Als er 2 woorden worden ingetypt (./ceasar ..) dan gebeurt het onderstaande
    if (argc == 2)
    {
        //Is het ingevulde geen digit, print dan "usage:./ceasar key"
        for (int l = 0, n = strlen(argv[1]); l < n; l++)
        {
            if (!isdigit(argv[1][l]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        //input moet een int type worden
        int key = atoi(argv[1]);

        //input van de gebruiker
        string text = get_string("Text: ");

        //print "cipertext "
        printf("ciphertext: ");

        //loop door de text, per letter, upper blijft upper en lower blijft lower. In deze loop zorg je ervoor dat de ciphertext zichtbaar wordt.
        for (int l = 0, t = strlen(text); l < t; l++)
        {
            if (isupper(text[l]))
            {
                printf("%c", (((text[l] - 'A') + key) % 26) + 'A');
            }

            else if (islower(text[l]))
            {
                printf("%c", (((text[l] - 'a') + key) % 26) + 'a');
            }

            else
            {
                printf("%c", text[l]);
            }
        }
    }
    //Als er geen 2 woorden worden ingetypt bij argc print "usage: ./ceasar key"
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("\n");

}