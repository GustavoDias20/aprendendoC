#include <stdio.h>

int main() {
    /*
    estrutura de um Switch
    /*int variavel;

    printf("Digite um valor\n");
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        printf("Codigo a ser executado se variavel == 1\n");
        break;
    case 2:
        printf("Codigo a ser executado se variavel == 2\n");
        break;
    default:
        printf("Codigo a ser executado se a variavel não for 1 nem 2");
        break;
    }*/

    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n 2. Fazer depósito.\n 3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %.2f\n", saldo);
        break;
    case 2:
        printf("Digite o banco que você deseja depositar\n");
        printf("Digite a agencia que você deseja depositar\n");
        printf("Digite a conta que você deseja depositar\n");
        break;
    case 3:
        printf("Digite o valor a ser sacado\n");
        break;
    default:
        printf("Digite uma opção valida\n");
        break;
    }
}