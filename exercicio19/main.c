#include <stdio.h>

int main()
{
    double total = 0.0;

    for(int i = 1; i <= 50; i++)
    {
        total += (2-(1.0/i));
    }
    printf("\nSoma da serie eh = %.2lf\n", total);

    return 0;
}