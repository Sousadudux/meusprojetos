#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
int numeros[3],numeroscomparados;
    for (int i = 0; i < 3; i+2)
    {
        printf("numero %i\n",i);
        scanf("%i",&numeros[i]);

    }
    for (int i = 0; i < 3; i+2) {
            if (i==0) {
                numeroscomparados=numeros[i];
            }
         
        printf("numeros lidos %i\n",numeros[i]);
            
            if (numeros[i]>numeroscomparados) {
                    numeroscomparados=numeros[i];
                                       
        }
    }
        printf("Maior numero %i",numeroscomparados);
   
return 0;
}