#include <stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d\t", i * j); // \t da um espaçamento na hora da saida do codigo 
        }
        printf("\n");
    }
}