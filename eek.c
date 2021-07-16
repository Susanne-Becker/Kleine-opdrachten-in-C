#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Type something: ");
    int j = 0;

        for (int i = 0, n = strlen(s); i < n; i++){
            if (s[i] == 101) {
                j++;
             } else if (s[i] == 69) {
                 j++;
             }
        }
        printf("The text ");
        printf("%s", s);
        printf(" contains ");
        printf("%i", j);
        printf(" e's.");
        printf("\n");
}
