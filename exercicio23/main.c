#include <stdio.h>

int main() {
int numero, inicial;

printf("digite un numero inteiro: ");
scanf("%d", &numero);

inicial = numero;
while (1) {
    numero++;
    if (numero % 11 == 0 || numero % 13 == 0 || numero % 17 == 0) {
        printf("o primeiro multiplo de 11, 13 ou 17 a partir de %d eh %d\n", inicial, numero);
        break;
    }


}

    return 0;
}
