#include <stdio.h>

int main()

{int idade;
char nome[10];
char sexo[3];

printf("qual seu nome?\n");
scanf("%s",&nome);

printf("qual sua idade?\n");
scanf("%i",&idade);
if (idade>=18){
    printf("gostaria de sexo?\n");
    scanf("%s",&sexo);
}
else {
    printf("vc nao possui idade necessaria para o sexo\n");
}




return 0;}
