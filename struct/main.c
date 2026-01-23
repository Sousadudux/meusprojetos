#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{
    struct pessoa
    {
        char nome[10];
        int idade;
        float peso;
    };
struct pessoa p1;
printf("digite seu nome?");
    scanf("%s",&p1.nome);
printf("qual a sua idade?");
    scanf("%i",&p1.peso);
printf("qual seu peso?");
    scanf("%f",&p1.peso);

printf("Seu nome e= %s",p1.nome);


return 0;
}
