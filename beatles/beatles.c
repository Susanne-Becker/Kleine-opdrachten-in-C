#include <stdio.h>
#include <cs50.h>

struct musician {
    string name;
    string instrument;
    int year_born;
};

void print_musician (struct musician beatles[4]);

int main()
{
    struct musician beatles[4] =
    {
        {"John", "guitar, vocals", 1940},
        {"Paul", "bass, vocals", 1942},
        {"George", "guitar, vocals", 1943},
        {"Ringo", "drums", 1940}
    };

    print_musician(beatles);
}

void print_musician (struct musician beatles[4])
{
     printf("The members of The Beatles are:\n");

    for(int i=0; i<4; i++)
     {
        printf("Name: %s\n", beatles[i].name);
        printf("Instrument: %s\n", beatles[i].instrument);
        printf("Born: %i\n", beatles[i].year_born);
        printf("\n");
     }
}


