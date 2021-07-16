//4.1 Zeer eenvoudig, maar zeer inefficiënt sorteren
#include <stdio.h>
#include <cs50.h>


void simple_sort_asc(int b[], int n);
void printArray(int b[], int n);


int main(void)
{
    int A[] = { 5, 12, -4, 8, 1, 0, 16, 3, 7}; // -4 0 1 3 5 7 8 12 16
    int N = sizeof(A)/sizeof(A[0]);

    simple_sort_asc(A, N);

    printArray(A, N);
}


void simple_sort_asc(int b[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int k = i + 1; k < n; k++)
        {
            if (b[k] < b[min])
            {
                min = k;
            }
        }
        int swap = b[min];
        b[min] = b[i];
        b[i] = swap;
    }
}


void printArray(int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}
