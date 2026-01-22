#include <stdio.h>
#include <string.h>
#include <math.h>

float adiciona(float numero1,float numero2) {

return numero1+numero2;
}

float menos(float numero1,float numero2) {

return numero1-numero2;
}

float multiplicacao(float numero1,float numero2) {

return numero1*numero2;
}

float potencia(float numero1,float numero2) {

return pow(numero1,numero2);
}

float divisao(float numero1,float numero2) {

return numero1/numero2;
}

int main()
{
char x[5];
float n,n2;

double resultado;

printf("--Ola bem vindo, qual operacao matematica deseja usar?\n\np => Potenciacao\n\na => Adicao\n\ns => Subtracao\n\nd => Divisao\n\nm => Multiplicacao\n\n");
scanf("%s",&x);

if (strcmp(x,"p")==0) {

printf("\n--Qual a base da operacao?\n\n==");
scanf("%f",&n);
printf("\n--E qual o expoente?\n\n==");
scanf("%f",&n2);

double resultado= potencia(n,n2);
printf("\nresultado=%f\n",potencia);
printf("\n--Calculo concluido, agradecemos a preferencia\n");
}

setbuf(stdin, NULL);

if (strcmp(x,"a")==0) {

printf("\n--digite a primeira parcela\n\n==");
scanf("%f",&n);
printf("\n--qual a segunda parcela?\n\n==");
scanf("%f",&n2);

resultado= adiciona(n,n2);

printf("\nresultado=%f\n",resultado);
printf("\n--Calculo concluido, agradecemos a preferencia\n");
}

setbuf(stdin, NULL);

if (strcmp(x,"d")==0){

printf("\n--digite o dividendo da operacao\n\n==");
scanf("%f",&n);
printf("\n--qual o divisor?\n\n==");
scanf("%f",&n2);

resultado= divisao (n,n2);

printf("\nresultado=%f\n",resultado);
printf("\n--Calculo concluido, agradecemos a preferencia\n");
}

setbuf(stdin, NULL);

if (strcmp(x,"s")==0) {

printf("\n--Qual o minuendo da operacao?\n\n==");
scanf("%f",&n);
printf("\n--E qual o subtraendo?\n\n==");
scanf("%f",&n2);

resultado= menos (n,n2);

printf("\nresultado=%f\n",resultado);
printf("\n--Calculo concluido, agradecemos a preferencia\n");
}

setbuf(stdin, NULL);

if (strcmp(x,"m")==0) {

printf("\n--digite o fator da operacao\n\n==");
scanf("%f",&n);
printf("\n--qual o produto?\n\n==");
scanf("%f",&n2);

resultado= multiplicacao(n,n2);

printf("\nresultado=%f\n",resultado);
printf("\n--Calculo concluido, agradecemos a preferencia\n");
}

return 0;}
