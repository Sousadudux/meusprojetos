#include <stdio.h>
#include <string.h>

int main()

{char nome[10];

printf("qual seu nome?\n\n");
scanf("%s",&nome);

if (strcmp(nome,"eduardo")==0) {

    printf("\ne meu xara\n");
}

else if (strcmp(nome,"joao")==0) {

    printf("\noutro xara");
}

else {
    printf("\nvaza");
}


return 0;}


