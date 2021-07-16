#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

#define MAX 8

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage is \"./numbers username\"\n");
        return 1;
    }

    // get length of name, allocate memory for message
    int nameLength = strlen(argv[1]);
    char* str = malloc(sizeof(char) * (nameLength + 8));

    // strcpy copies to the destination, the string
    strcpy(str, "Welcome ");

    // strcat adds str, to the second string
    strcat(str, argv[1]);

    // welcomes user
    printf("%s\n", str);
    printf("Let's get your favourite numbers from the file \"numbers.txt\"\n");

    // opens numbers.txt in read mode, and checks if the file can be opened
    FILE* file = fopen("numbers.txt", "r");

    if (file == NULL)
    {
        printf("numbers.txt can't be opened\n");
        return 2;
    }

    // setting up buffer for the string found in numbers.txt
    char buffer[MAX];

    // counting the amount of lines in numbers.txt
    int lineCounter = 0;

    while (fgets(buffer, MAX, file) != NULL)
    {
        lineCounter++;
    }

    printf("Amount of lines in numbers.txt: %i\n", lineCounter);

    // resets filepointer to start of the file
    fseek(file, 0, SEEK_SET);

    // allocating memory for the string (calloc sets the allocated memory to zero)
    char* numberString = calloc(lineCounter, sizeof(char));

    // concatenate each line (including \n) to numberString
    while (fgets(buffer, MAX, file) != NULL)
    {
        strcat(numberString, buffer);
    }

    printf("Your favourite numbers are:\n%s", numberString);

    // setting string of numbers back to zero
    memset(numberString, 0, sizeof(int));

    return 0;
}
