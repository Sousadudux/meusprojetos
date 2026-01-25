#include <stdio.h>

int main() {
    int numeros; 
    float media=0;
     for( int i = 1; i <= 10; i++ ) {
       printf("Digite o %d valor : ", i);
         scanf("%d", &numeros);
          media+=numeros;
          
          
        }
    media=media/10;
         printf("A media dos valores digitados e: %f\n", media);
        

    return 0;
}