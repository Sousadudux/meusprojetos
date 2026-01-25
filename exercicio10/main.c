#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int n, numero = 1;
    printf("quais os primeiros impares deseja saber?\n");
    scanf("%d", &n);

    for ( int i = 1; i <= n; i++) {
     printf("\n%i",numero);
      numero+=2;
}


    return 0; }
