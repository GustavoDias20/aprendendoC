#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // gerando numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100+1; // numero de 1 a 100

    //inicio do jogo
    printf("Bem vindo ao jogo Maior, Menor ou Igual! \n");
    printf("Você deve escolher um número e o tipo de comparação. \n");
    printf("M. Maior\n N. Menor\n I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", & tipoComparacao);

    printf("Digite seu número (Entre 1 e 100): ");
    scanf("%d", & numeroJogador);

    // exibir o numero do computador
    

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default:
        printf("Opção de jogo invalida!\n");
        return 0;
    }

    printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

    if(resultado == 1){
        printf("Parabens, você ganhou!\n");
    }
    else{
        printf("infelizmente, você perdeu!\n");
    }
}