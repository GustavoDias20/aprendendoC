#include <stdio.h>
#include <stdlib.h> //necessario para poder usar o rand() e srand()
#include <time.h>

int main(){
    int opcao, numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar jogo\n 2. Ver regras\n 3. Sair\n Escolha uma opção: ");
    scanf("%d", & opcao);

    switch (opcao)
    {
    case 1:
        srand(time(NULL));
        numeroSecreto = rand() % 10;
        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite){
            printf("Você acertou!\n");
            printf("Numero secreto: %d\n", numeroSecreto);
        }
        else{
            printf("Você errou!\n");
            printf("Numero secreto: %d\n", numeroSecreto);
        }
        break;
    case 2:
        break;
    case 3:
    printf("Saindo do jogo...");
        break;
    default:
    printf("Opção invalida.");
        break;
    }
}