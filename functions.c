#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

int times_two(int a);
void print_int(int a);
int half(int a);
void print_float(float b);
float avarage(int z, int q);
float max (float g, float h);
void print_array(float *array, int w);
void max_value (float *g, int l);


int main (void)
{
    int x = 2;
    int y = half(x);
    print_int(y);

    print_float(2.744);

    int c = 4.0;
    int d = 7.0;
    float e = avarage(c, d);
    print_float(e);

    float m = 5.5;
    float o = 7.8;
    float i = max(m, o);
    print_float(i);

    float a[] = {1.555, 3, 1.645, 178};
    print_array(a, 4);
    max_value(a, 4);
}

int times_two(int a)
{
    return a*2;
}

void print_int(int a)
{
    printf("Value = %i\n", a);
}

int half(int a)
{
    return a/2;
}

void print_float(float b)
{
    printf("Value = %.2f\n", b);
}

float avarage(int z, int q)
{
    return (float)(z + q) / 2;
}

float max (float g, float h)
{
    if (g > h)
    {
        return g;
    }
    else
    {
        return h;
    }
}

void print_array(float *u, int w)
{
    printf("Value = ");
    for (int i = 0; i < w; i++)
    {
        printf("%.2f ", u[i]);
    }
    printf("\n");
}

void max_value (float *g, int l)
{
    float max = g[0];
    printf("Value = ");
    for (int i = 0; i < l; i++)
    {
        if (g[i] > max)
            max = g[i];
    }
    printf("%.2f\n ", max);
}

