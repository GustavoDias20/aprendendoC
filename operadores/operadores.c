#include <stdio.h>

int main(){
    int numero1, numero2, resultado;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro numero\n");
    scanf("%i", &numero1);

    printf("Digite o segundo numero\n");
    scanf("%i", &numero2);

    //operações matematicas
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    divisao = numero1 / numero2;
    multiplicacao = numero1 * numero2;


    printf("Soma: %i\n Subtração: %i\n Divisão: %.2f\n Multiplicação: %i\n", soma, subtracao, divisao, multiplicacao);

    /*
    nas linguagens de programação tambem temos os operadores de atribuição, alguns são
    atribuição simples (=)
    atribuição com soma (+=)
    atribuição com subtração (-=)
    atribuição com multiplicação (*=)
    atribuição com divisão (/=)
    */

    //iremos mexer um pouco com algumas variaveis a partir disso

    resultado = 10;

    printf("numero 3 igual a: %d\n", resultado);

    resultado += 5;
    //tambem é possivel fazer essas atribuições com variaveis, como por exemplo 
    //resultado += numero1; que seria a mesma coisa que você escrever
    //resultado = resultado + numero1;

    printf("numero 3 igual a: %d\n", resultado);

    resultado -= 7;

    printf("numero 3 igual a: %d\n", resultado);

    resultado *= 3.125;

    printf("numero 3 igual a: %d\n", resultado);

    resultado /= 5;

    printf("numero 3 igual a: %d\n", resultado);

    /*
    Operadores de incremento e decremento
    incremento (++)
    decremento (--)
    */

    int numero3 = 1;

    printf("Antes do incremento: %d\n", numero3);
    numero3++; //isso tbm poderia ser escrito assim 
    //numero3 = numero3 + 1;
    //numero3 += 1;
    printf("Depois do incremento: %d\n", numero3);
    numero3--; //mesma coisa aqui
    //numero3 = numero3 - 1;
    //numero3 -= 1;
    printf("Depois do decremento: %d\n", numero3);

    /*
    tambem existe o conceito de pós e pré incremento imaginamos que tenho o codigo
    resultado = numero3++;
    o que vai acontecer, o resultado vai pegar o valor de numero3 antes dele ser incrementado
    então faremos como exemplo
    */

    resultado = numero3++;
    printf("Apos pós-incremento - numero: %d - resultado: %d\n", numero3, resultado);
    resultado = ++numero3;
    printf("Apos pré-incremento - numero: %d - resultado: %d\n", numero3, resultado);

    //tambem pode ser feito isso com o decremento

    resultado = numero3--;
    printf("Apos pós-decremento - numero: %d - resultado: %d\n", numero3, resultado);
    resultado = --numero3;
    printf("Apos pré-decremento - numero: %d - resultado: %d\n", numero3, resultado);
}