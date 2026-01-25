
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
int numeros, maior,numero, quantidade=0;

printf("quantos numeros deseja digitar??\n=");
scanf("%d", &numeros);

 for (int i = 0; i < numeros; i++) {

     printf("digite o numero da posicao %d = ", i);
      scanf("%d", &numero);

      if (i == 0) {

        maior=numero;
        quantidade=1; }

        else {

         if (numero>maior) {

          maior=numero;
          quantidade++; }

}

}

printf("o maior numero eh = %d\n\n", maior);
sprintf("a quantidade de vezes que um maior numero foi lido eh =%d", quantidade);
return 0; }
