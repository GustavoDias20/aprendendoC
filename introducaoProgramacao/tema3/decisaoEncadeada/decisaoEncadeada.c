#include <stdio.h>

int main(){
    // int condicao1, condicao2;

    /* estrutura aninhada

    if(condicao1){
        if(condicao2){
            // codigo a ser executado se ambas as condições forem verdadeiras
        }
    }

    // estrutura encadeada

    if(condicao1){
        // codigo a ser executado caso codicao1 for verdadeiro
    }
    else if(condicao2){
        // codigo a ser executado caso codicao1 for falso e condicao2 for verdadeiro
    }
    else {
        // codigo a ser exetudado caso ambas as conições anteriores forem falsa
    }
    */

    int idade; 

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    //criança < 12
    //adolescente >= 12 && < 18
    //adulto >= 18 && < 60
    //idoso >= 60

    if(idade < 12){
        printf("Você é uma criança\n");
    }
    else if (idade >= 12 && idade < 18){
        printf("você é um adolescente\n");
    }
    else if (idade >= 18 && idade < 60){
        printf("você é um adulto\n");
    }
    else{
        printf("você é um idoso\n");
    }

    int nota;

    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //E >= 50
    //F

    printf("Digite a sua nota\n");
    scanf("%d", &nota);

    if (nota >= 90){
        printf("Conceito A!\n");
    }
    else if (nota >= 80){
        printf("Conceito B!\n");
    }
    else if (nota >= 70){
        printf("Conceito C!\n");
    }
    else if (nota >= 60){
        printf("Conceito D!\n");
    }
    else if (nota >= 50){
        printf("Conceito E!\n");
    }
    else {
        printf("Conceito F!\n");
    }
}