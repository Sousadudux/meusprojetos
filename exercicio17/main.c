
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
int numero, total = 0;

printf("escreva o numero final!!\n=");
scanf("%d", &numero);

 for (int i = 1; i <= numero; i++) {

    printf("\n %d", i);
    total+=i;

 }

 printf("\nA soma total eh = %d", total);


return 0; }
