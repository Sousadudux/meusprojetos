#include <stdio.h>
#include <string.h>

int main()
{
    int senha, senha2;
    char usuario[10], sim[3], usuario2[10];

    setbuf(stdin, NULL);

    printf("DESEJA SE CADASTRAR?\n\n");
    scanf("%s", sim);

    setbuf(stdin, NULL);

    printf("\nCOMECE CRIANDO SEU NOME DE USUARIO ABAIXO\n\n=>");
    scanf("%s", usuario);

    printf("\nAGORA CRIE SUA SENHA\n\n=>");
    scanf("%i", &senha);

    setbuf(stdin, NULL);

    printf("\nAGORA FACA LOGIN EM SUA NOVA CONTA\n\nINSIRA O NOME DE USUARIO CRIADO ABAIXO\n\n=>");
    scanf("%s", usuario2);

    if (strcmp(usuario, usuario2) == 0) {
        printf("\nUSUARIO CORRETO, AGORA INSIRA SUA SENHA ABAIXO\n\n=>");
        scanf("%i", &senha2);

        if (senha2 == senha) {
            printf("\nLOGIN REALIZADO COM SUCESSO");
        } else {
            printf("\nSENHA INCORRETA, TENTE NOVAMENTE MAIS TARDE");
        }
    } else {
        printf("\nUSUARIO INCORRETO, TENTE NOVAMENTE MAIS TARDE");
    }

    return 0;
}
