#include <stdio.h>

int main(){

    //conversão implicita
    int a = 10;
    float b = 3.5;
    float resultado = a + b; //aqui a variavel "a" é convertida implicitamente para o tipo float

    printf("Resultado: %.2f\n", resultado);


    //conversão explicita
    //usa o casting neste caso, o (float) seria o casting, para converter explicitamente 

    int x = 10;
    int y = 3;
    float quociente = (float) x / y; // "x" é explicitamente convertido para float

    printf("Resultado: %.2f\n", quociente);

    //caso o casting não seja feito, poderá haver perda de dados durante o calculo, veja o exemplo a seguir

    float resultado1 = x/y;
    printf("Resultado: %.2f\n", resultado1);

    //se executar o codigo, verá que o codigo acima retornará somente 3.00 mesmo com a variavel sendo float

    return 0;
}