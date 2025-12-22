#include <stdio.h>

int main(){
    int numero1 = 10, numero2 = 50;

    if (numero1 > numero2){
        printf("Numero 1 maior que numero 2\n");
    }
    else{
        printf("Numero 2 maior que numero 1\n");
    }

    int numero = 5;

    if(numero % 2 == 0){
        printf("O numero é par\n");
    }
    else{
        printf("O numero é impar\n");
    }

    float temperatura = 25.0;

    if (temperatura >= 30.0){
        printf("Está calor\n");
    }
    else {
        printf("Não está calor\n");
    }

    int nota = 55;

    if (nota >= 60){
        printf("Parabéns! você passou!\n");
    }
    else{
        printf("Infelizmente, você não passou.\n");
    }

    int idade = 16;

    if(idade>=18){
        printf("Você é maior de idade\n");
    }
    else {
        printf("Você é menor de idade\n");
    }
}