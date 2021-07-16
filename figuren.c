//3.3 Figuren
#include <stdio.h>
#include <cs50.h>

void print_triangle(int h);
void print_square(int h);
void print_triangle2(int h);
void print_triangle3(int h);
void print_square2(int h);
void print_diamond(int h);
void print_diamond2(int h);

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");

    }
    while (height > 10 || height < 1);

    print_triangle(height);
    print_triangle2(height);
    print_triangle3(height);

    print_square(height);
    print_square2(height);

    print_diamond(height);
    print_diamond2(height);
}



void print_triangle(int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int space = h - i; space > 1; space--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < i + 1; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}

void print_triangle2(int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int hashes = 0; hashes < i + 1; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}

void print_triangle3(int h)
{
    for(int i = 1; i <= h; i++)
    {
        for(int j = i; j <= h; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == (2 * i - 1))
            {
                printf("#");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void print_square(int h)
{
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < h; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}

void print_square2(int h)
{
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= h; j++)
        {
            if(i == 1 || i == h || j == 1 || j == h)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    printf("\n");
}

void print_diamond(int h)
{
    //bovenste piramide
    for(int i = 1; i <= h; i++)
    {
        for(int j = i; j <= h; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    //onderste piramide
    for(int i = h - 1; i >= 1; i--)
    {
        for (int j = h; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}

void print_diamond2(int h)
{
    //bovenste piramide
    for(int i = 1; i <= h; i++)
    {
        for(int j = i; j <= h; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == (2 * i - 1))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    //onderste piramide
    for(int i = h - 1; i >= 1; i--)
    {
        for (int j = h; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
