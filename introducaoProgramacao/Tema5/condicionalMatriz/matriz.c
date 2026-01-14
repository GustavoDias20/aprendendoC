#include <stdio.h>

int main() {
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // MODIFICAÇÃO CONDICIONAL DE MATRIZ
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] > 5){
                matriz[i][j] = -matriz[i][j]; // se o numero for maior que 5, torna ele negativo
            }
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    int par = 0, impar = 0;
    // CONTAGEM CONDICIONAL EM UMA MATRIZ
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] % 2 == 0){
                par++;
            }
            else{
                impar++;
            }
        }
    }
    printf("Quantidade de números pares: %d\n", par);
    printf("Quantidade de números ímpares: %d\n", impar);


    // SUBSTITUIÇÃO CONDICIONAL DE ELEMENTOS
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(matriz[i][j] % 3 == 0){
                matriz[i][j] = -1;
            }
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // BUSCA CONDICIONAL EM UMA MATRIZ

    int alvo = 5;
    int found = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3;j++){
            if(matriz[i][j] == alvo){
                printf("Elemento %d encontrado na posição (%d, %d)\n", alvo, i, j);
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