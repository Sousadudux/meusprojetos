#include <stdio.h>

int main() {
int num, dividores;
printf("Digite um numero: ");
scanf("%d", &num);

if (num > 0) {
    dividores = 0;
     for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            dividores++;
             printf("Divisor: %d\n", i);
                          }
                                   }        
             }
else {
    printf("Numero invalido\n");
   }


    return 0;
}
