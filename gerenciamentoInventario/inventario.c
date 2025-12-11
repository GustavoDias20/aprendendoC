#include <stdio.h>

int main(){

    //iniciando variaveis
    char produtoA [30] = "Produto A", produtoB [30] = "Produto B";

    unsigned int estoqueA = 1000, estoqueB = 2000;
    
    float valorA = 10.50, valorB = 20.40;

    unsigned int estoqueMinimoA = 500, estoqueMinimoB =  2500;

    double valorTotalA, valorTotalB;

    int resultadoA, resultadoB;

    //informações do produto

    printf("Produto %s tem estoque %u e o valor unitario é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$%.2f\n", produtoB, estoqueB, valorB);

    //comparando com o valor minimo de estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    //comparando os valores totais dos produtos
    printf("O valor total de A (R$%.2f) é maior que o valor total de B(R$%.2f): %d\n",(estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));
}