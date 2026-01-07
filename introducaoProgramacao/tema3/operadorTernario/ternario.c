#include <stdio.h>

int main(){
    /*
    exemplo de estrutura de decisão com operador ternario

    condição ? verdadeiro : falso;

    é um if simplificado basicamente, nunca fui de usar muito
    

    int idade = 16, resultado;

    //idade >= 18 ? printf("Você é maior de idade") : printf("Você é menor de idade");

    //tambem podemos armazenar o resultado dessa comparação em uma variavel

    resultado = idade >= 18 ? 1 : 0;

    if(resultado == 1){
        printf("Você é maior de idade");
    }
    else{
        printf("Você é menor de idade");
    }
    */

    //int temperatura = 28;
    //temperatura > 30 ? printf("Está calor\n") : printf("Está frio\n");

    int num1 = 40, num2 = 20;
    int maior;
    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("O maior numero é %d", maior);
}