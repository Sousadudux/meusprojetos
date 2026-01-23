#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() 
    { int numero;
    printf("qual é o numero que deseja saber os primeiros 5 multiplos?");
    scanf("%i", &numero);

    for (int i = 1; i <= 5; i++) {
    
        printf(" = %i\n", i*numero);           
    }   
    return 0;
}
