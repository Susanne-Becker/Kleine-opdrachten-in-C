#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Type something: ");

        for (int i = 0, n = strlen(s); i < n; i++){
            if (i % 2 != 0) {
            printf("%c", toupper(s[i]));
             } else{
            printf("%c", s[i]);
             }

        }
        printf("\n");
}
