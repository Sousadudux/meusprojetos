#include <stdio.h>

int main() {

float numeros, maior, menor;

for (int i = 1; i <= 10; i++) {

    printf("digite o valor de %d\n", i);
     scanf("%f", &numeros);

      if (i==1) {
        maior=numeros;
        menor=numeros;
        }
        else {
            if (numeros>maior) {
                maior=numeros;
            }
            if (numeros<menor) {
                menor=numeros;
            }
        }

}
 printf("o maior numero e %f\n", maior);
          printf("o menor numero e %f\n", menor);

return 0;
}
