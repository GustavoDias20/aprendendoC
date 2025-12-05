#include <stdio.h>

int main() {
    //declarando uma variavel
    // tipo nome;
    // essa é a estrutura

    int idade = 25;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 90.3;
    char letra = 'A';
    char nome[20] ="Ricardo"; 
    // declaração de array, em C não se tem o tipo de variavel String. então para podermos guardar alguma informação
    // se vê necessario fazer um array de char para poder armazenar um nome por exemplo (meu Deus isso é muito ultrapassado)

    // pode se perceber que vem o tipo depois o nome da variavel.

    // tipos de dados 
    // int = numeros inteiros || exemplo (2)
    // float e double = numeros racionados || exemplo (1.5)
    // float armazena valores menores, e double armazena valores maiores
    // char = caracteres no geral

    printf ("o nome é %s\n", nome);
    printf ("a idade é %i \n", idade);
    printf ("a quantidade é %i \n", quantidade);
    printf ("a altura é %.2f \n", altura);//o %.2f indica quantas casas decimais eu vou deixar aparecer
    printf ("o peso é %.2f \n", peso);
    printf ("a letra é %c \n", letra);

    /*
    dentro do printf temos o formato para colocar as variaveis como por exemplo %i e depois a variavel idade
    aqui estão todos os formatos 

    %d: imprime um inteiro no formato decimal
    %i: equivalente a %d
    %f: imprime um numero de ponto flutuante no formato padrão
    %e: imprime um numero de ponto flutuante na notação cientifica
    %c: imprime um unico caractere
    %s: imprime uma cadeia (string) de caracteres
    */
}