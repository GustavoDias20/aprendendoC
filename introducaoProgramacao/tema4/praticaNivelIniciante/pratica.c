#include <stdio.h>

int main(){

    /*
    EXEMPLO WHILE
    int i = 0;
    while (i <= 10)
    {
        if(i % 2 == 0){
            printf("o número: %d é par!\n", i);
        }
        i++;
    }
    */

    /*
    EXEMPLO DO WHILE
    int numero;
    do{
        printf("Digite um número par para sair do programa: ");
        scanf("%d", & numero);

        if(numero % 2 == 0){
            printf("%d é par!\n", numero);
        }
        else{
            printf("%d é impar!\n", numero);
        }
    }
    while(numero % 2 != 0);

    printf("Você digitou um numero par, saindo do programa..."); 
    */

    int numero, i;

    printf("Digite um numero para calcularmos a tabuada: ");
    scanf("%d", &numero);
    for (i = 0; i <= 10; i++){
        printf("%d x %d: %d\n", numero, i, (i*numero));
    }

    return 0;
}