#include <stdio.h>

int main() {
    //se a 'idade' for 18 ou mais, o programa imprime "Você é maior de idade."

    int idade = 20;

    if(idade>=18){
        printf("Você é maior de idade\n");
    }

    float temperatura = 32.0;

    if (temperatura >= 30.0){
        printf("Está calor\n");
    }

    int nota = 65;

    if (nota >= 60){
        printf("Parabéns! você passou!\n");
    }

    int idade1 = 35, idade2 = 30;

    if (idade1 > idade2){
        printf("pessoa 1 é mais velha que pessoa 2\n");
    }

    int numero = 4, resultado;
    resultado = numero % 2;

    printf("A variavel resultado é: %d\n", resultado);
    if(resultado == 0){
        printf("O numero é par\n");
    }

    int estoque = 5;

    if(estoque <= 5){
        printf("Estoque baixo\n");
    }

    return 0;
}