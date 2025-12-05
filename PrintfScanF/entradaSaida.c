#include <stdio.h>
#include <string.h> //para usar o metodo strcspn na linha 16, é necessario ter esta biblioteca em seu projeto.

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[50];

    //sintaxe do scanf
    //scanf ("formato1" "formato2", &variavel1, variavel2, ...);
    printf("Qual seu nome?\n");
    fgets(nome,50,stdin); //com o fgets, ele lê o que é digitado completamente pelo teclado, então caso eu digite um nome e clique enter, ele vai receber
    // "João Henrique\n" aonde o \n seria o enter do teclado, a gente pode remover esse \n em codigo

    nome[strcspn(nome, "\n")] = 0; //nesta linha a gente transforma o \n em \0, o que acaba com a leitura da cadeia de caracteres é sempre um \0

    //comentei a linha original que utiliza o scanf para ler o nome, pois há uma maneira melhor para guardar nomes, pois o " " espaço em branco digitado 
    //pelo usuario é contado como finalização da leitura no scanf, ou seja, se eu quiser escrever um nome composto e ler com scanf, somente leria o primeiro nome
    //scanf("%19s", nome); //limito a 19 caracteres para não pegar o limite (em char nome[50] ele reserva sempre o ultimo caractere para o buffer)
    //caso eu coloque algo com mais de 19 caracteres, pode dar erro no codigo
    //nunca colocar & para cadeia de char, isso vai bugar o codigo todo
    printf("Olá %s, me diga, qual sua idade?\n", nome);
    scanf("%i", &idade);
    printf("e a sua altura?\n");
    scanf("%f", &altura);
    printf("Por fim, selecione qualquer caractere do teclado...\n");
    scanf(" %c", &opcao); //note o espaço " " antes do %c, isso é para evitar que o compilador entenda o pular linha do \n como uma tecla

    printf("nome: %s \n idade: %i \n altura: %.2f \n opção: %c", nome, idade, altura, opcao);

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