#include <stdio.h>
#include <stdlib.h>

int main() {

int contador = 0, contador2 = 0;
int n;

printf("escreva a sequencia de numeros inteiros (1000 para terminar):\n");

while (1)
{ scanf("%d", &n);
  if (n == 1000) {break;
    }
  if (n % 2 == 0) {
    contador++;}
  contador2++;             

    
    


}   
printf("Quantidade de numeros pares: %d\n", contador);
printf("o numero de dados: %d\n", contador2);

    return 0;}