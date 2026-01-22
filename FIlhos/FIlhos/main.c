#include <stdio.h>

int main()

{int cm_de_pika;

int idade;

char possui_filhos[3];

 printf ("QUANTOS CM DE PIKA?\n");
 scanf("%i",&cm_de_pika);

 setbuf(stdin, NULL);

 printf ("possui filhos?\n");
 scanf("%s",&possui_filhos);

 printf("---\n");
 printf("%s",possui_filhos);

return 0;}
