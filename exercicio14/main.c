#include <stdio.h>

float pedidos (float numero1, float numero2) {

return numero1*numero2;
}

int main() {

int pedido, quantidade;
float preco1 = 1.20, preco2 = 1.30, preco3 = 1.50, preco4 = 1.20, preco5 = 1.70, preco6 = 2.20, preco7 = 1.00;

    printf("Digite o codigo do lanche pretendido\n\n Cachorro Quente '100' PRECO = 1.20\n Bauru Simples '101' PRECO = 1.30\n Bauru com Ovo '102' PRECO = 1.50\n Hamburguer '103' PRECO = 1.20\n Cheeseburguer '104' PRECO = 1.70\n Suco '105' PRECO = 2.20\n Refrigerante '106' PRECO = 1.00\n\n");
    scanf("%d", &pedido);

    if (pedido == 100 || 101 || 102 || 103 || 104 || 105 || 106) {



    if (pedido==100) {

     printf("\nquantos desse item deseja selecionar?\n");
            scanf("%d", &quantidade);

     printf("\nCerto, o preco total do seu pedido ficou = %2f\n", pedidos(preco1,quantidade));

    }
    if (pedido==101) {

     printf("\nquantos desse item deseja selecionar?\n");
            scanf("%d", &quantidade);

     printf("\nCerto, o preco total do seu pedido ficou = %2f\n", pedidos(preco2,quantidade));

    }
    if (pedido==102) {

     printf("\nquantos desse item deseja selecionar?\n");
            scanf("%d", &quantidade);

     printf("\nCerto, o preco total do seu pedido ficou = %2f\n", pedidos(preco3,quantidade));

    }
    if (pedido==103) {

     printf("\nquantos desse item deseja selecionar?\n");
            scanf("%d", &quantidade);

     printf("\nCerto, o preco total do seu pedido ficou = %2f\n", pedidos(preco4,quantidade));

    }
    if (pedido==104) {
     printf("\nquantos desse item deseja selecionar?\n");
            scanf("%d", &quantidade);

     printf("\nCerto, o preco total do seu pedido ficou = %2f\n", pedidos(preco5,quantidade));

    }
    if (pedido==105) {
     printf("\nquantos desse item deseja selecionar?\n");
            scanf("%d", &quantidade);

     printf("\nCerto, o preco total do seu pedido ficou = %2f\n", pedidos(preco6,quantidade));

    }
    if (pedido==106) {

     printf("\nquantos desse item deseja selecionar?\n");
            scanf("%d", &quantidade);

     printf("\nCerto, o preco total do seu pedido ficou = %2f\n", pedidos(preco7,quantidade));

    }
            }

     else if (pedido != 100 || 101 || 102 || 103 || 104 || 105 || 106 ) {

        printf("\n codigo desconhecido, tente novamente mais tarde\n");
    }



    return 0;
}
