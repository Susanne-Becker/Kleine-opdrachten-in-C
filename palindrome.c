#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Type something: ");
    int i = 0;
    int  n = strlen(s) - 1;

        if (s[i] != s[n--]) {
               printf("Given string is not palindrome");
         } else {
               printf("Given string is a palindrome");
         }
        

        printf("\n");
}







