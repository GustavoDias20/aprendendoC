#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){
    int EscolhaJogador, EscolhaComputador;
    srand(time(0));

    printf("Jogo de Jokenpo\n");
    printf("Escolha uma opção:\n 1. Pedra\n 2. Papel\n 3. Tesoura\n Escolha: ");
    scanf("%d", & EscolhaJogador);

    EscolhaComputador = rand() % 3 + 1; //se tirar o +1, os numeros aleatorios seriam 0, 1, 2 agora com +1 fica 1, 2, 3

    switch (EscolhaJogador){
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção invalida.\n");
        break;
    }

    switch (EscolhaComputador){
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if(EscolhaComputador == EscolhaJogador){
        printf("Jogo empatou!!");
    }
    else if ((EscolhaJogador == 1) && (EscolhaComputador == 3) || (EscolhaJogador == 2) && (EscolhaComputador == 1) || (EscolhaJogador == 3) && (EscolhaComputador == 2)){
        printf("Parabens, você ganhou!!");
    }
    else{
        printf("Você perdeu :(");
    }

    return 0;
}