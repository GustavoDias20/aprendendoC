#include <stdio.h>

int main(){
    int idade, dependentes;
    float renda;

    /*
    ESTRUTURA DE DECISÃO ANINHADA

    if (condicao1){
        if(condicao2){
            Codigo a ser executado se condicao1 e condicao2 forem verdadeiras
        }
        else {

        }
    }
    */

    // programa que verifica se uma pessoa está qualificada para um desconto especial com base na idade e na renda mensal. A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000

    printf("Digite sua idade\n");
    scanf("%d", &idade);
    printf("Digite sua renda mensal\n");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60){
        if(renda < 2000){
            printf("Você tem direito ao desconto \n");
        }
        else{
            printf("Você não tem direito ao desconto \n");
        }
    }
    else {
        printf("Você não atender aos requisistos de idade\n");
    }

    /*
    Segundo programa

    a primeira condição idade do usuario entre 18 e 65 anos.
    a segunda condição se a renda do usuario é menor que 3000.
    a terceira condição verifica se o numero de dependentes é maior que 2;
    */

    printf("Digite sua idade\n");
    scanf("%d", &idade);
    printf("Digite sua renda mensal\n");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes\n");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65){
        if(renda < 3000){
            if (dependentes > 2){
                printf("Você atende a todos os critérios\n");
            }
            else{
                printf("Você não atende ao critério dependentes\n");
            }
        }
        else{
            printf("Você não atende ao critério renda\n");
        }
    }
    else{
        printf("Você não atende ao critério idade\n");
    }

    // Terceiro programa

    int numero;

    printf("Digite um numero\n");
    scanf("%d", &numero);

    if(numero > 0){
        if(numero % 2 == 0){
            printf("numero par positivo\n");
        }
        else{
            printf("numero impar positivo\n");
        }
    }
    else if(numero == 0){
        printf("numero é igual a zero\n");
    }
    else{
        printf("numero é negativo\n");
    }
}