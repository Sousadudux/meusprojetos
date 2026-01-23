#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float power(float num1)
{
    return pow(num1,2);
}
float radication(float num1)
{
    return sqrt(num1);
}
float delta (float b, float a, float c)
{
    return sqrt(power(b)-4*a*c);
}
int main()


{
    float formula,a,b,c;
    float resultado,resultado2,x,x2;
    int aa,bb,cc; 



    printf("OLA!!! Qual formula matematica deseja usar na operacao?\n\n(1) BHASKARA\n\n");
    scanf("%f",&formula);

    if (formula==1)
    {

        printf("\nEsta e a sua equacao de segundo grau (ax,2) + bx + c = 0)\n\nSubstitua as incognitas no espaco abaixo\n\na=");
        scanf("%d",&aa);
        printf("\nb=");
        scanf("%d",&bb);
        printf("\nc=");
        scanf("%d",&cc);

        if (delta(bb,aa,cc)>0)
        {
            x= (-bb-delta(bb,aa,cc))/2*aa ;
            printf("\nresultado= %.2f\n",x);
            x2= (-bb+delta(bb,aa,cc))/2*aa ;
            printf("\nresultado= %.2f\n",x2);
        }
        if (delta(bb,aa,cc)==0)
          {
            x= (-bb-delta(bb,aa,cc))/2*aa ;
            printf("\nresultado= %f\n",x);
         }

        else
        {
            printf("O resultado sera indefinido!!!!!!!");

    }
}
    return 0;
}






























