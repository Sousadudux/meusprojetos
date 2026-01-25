#include <stdio.h>

int main() {
    int total, soma=0;
    for (int i = 1; i<=10; i++) {
        printf("Digite o %d valor\n", i);
        scanf("%d", &total);
        soma += total;
        printf("A soma atual é: %d\n", soma);
    }
   
    return 0;
}