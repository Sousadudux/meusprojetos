#include <stdio.h>

int main() {
int num1, num2;
int soma = 0;
int multi = 1;
printf("digite dois numeros:\n");
printf("Numero menor: ");
scanf("%d", &num1);
printf("Numero maior: ");
scanf("%d", &num2);


     for (int i = num1; i <= num2; i++) {
         
        if (i % 2 &&== 0) {
            soma += i;
        }
             
        if (i % 2 != 0) {
            multi *= i; 

     }
    }
        printf("A soma dos numeros pares entre %d e %d e: %d\n", num1, num2, soma);

        printf("A multiplicacao dos numeros impares entre %d e %d e: %d\n", num1, num2, multi);

    return 0;
}