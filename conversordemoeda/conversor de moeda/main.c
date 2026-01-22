#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

{
int quantidade1,quantidade2,quantidade3,moeda;

printf("para qual moeda deseja converter?\n\n1-(dolars)\n\n2-(euros)\n\n3-(pesos)\n\n");
scanf("%i",&moeda);
if (moeda==1) {

printf("\nquantos reais deseja converter?\n=>");
scanf("%i",&quantidade1);
double conversao1 = quantidade1*0.19;
printf("\n%f dolars\n",conversao1);

printf("\nagradecemos pelo uso de nossos servicos, volte sempre\n");
}

else if (moeda==2) {

printf("\nquantos reais deseja converter?\n=>");
scanf("%i",&quantidade2);
double conversao2 = quantidade2*0.16;
printf("\n%f euros\n",conversao2);

printf("\nagradecemos pelo uso de nossos servicos, volte sempre\n");
}

else if (moeda==3) {
printf("\nquantos reais deseja converter?\n=>");
scanf("%i",&quantidade3);
double conversao3 = quantidade3*266.69;
printf("\n%f pesos\n",conversao3);

printf("\nagradecemos pelo uso de nossos servicos, volte sempre\n");
}

else {

printf("\n-----ATENCAO-----\nmoeda nao encontrada,tente novamente mais tarde\n");
}

return 0;}

/*euro=0,16  dolar=0,19 pesos=266,69*/
