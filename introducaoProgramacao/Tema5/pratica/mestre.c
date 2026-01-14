#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main(){

    int matriz[LINHA][COLUNA];
    int soma = 1;
    int alvo = 90;
    int found = 0;

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA;j++){
            matriz[i][j] = soma;
            soma++;
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA;j++){
            if(matriz[i][j] == alvo){
                printf("Elemento %d encontrado no índice (%d, %d)\n", alvo, i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    if(!found){
        printf("Elemento %d não encontrado na matriz\n", alvo);
    }
}