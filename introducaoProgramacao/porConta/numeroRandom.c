#include <stdio.h>

#include <stdlib.h> //necessario para poder usar o rand() e srand()
#include <time.h>
#include <string.h> //necessario para o if identificar uma string

int main(){
    int numero;

    srand(time(NULL)); // inicializa o gerador

    numero = rand() % 5;

    char escolha[5][50] = { //um array de palavras
        "População",
        "Área",
        "PIB",
        "Densidade Populacional",
        "PIB per capita"
    };

    printf("%s\n", escolha[1]);

    if(strcmp(escolha[1], "Área") == 0) { // == 0 strings iguais < 0 ou > 0 strings diferentes
        printf("ESCOLHIDO ÁREA");
    }
}