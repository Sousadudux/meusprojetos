#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

int soma = 0;

for (int i = 2; i <=100; i+=2) {

    printf("%d\n",i);
      soma+=i;
}

printf("o valor total eh %d = \n ", soma);

return 0; }
