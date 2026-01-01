/*
E logico (&&)
OU logico (||)
NÃO logico (!)


no && logico, a saida somente será verdade sé todos os parametros da comparação forem verdadeiros, caso não, retornará falso.

ja no ||, ele retornará sempre verdadeiro, a não ser que todos os parametros de comparação sejam falso.
*/

#include <stdio.h>

int main() {
    int a = 10, b = 5;

    if(a > 0 && b > 0){
        printf("os dois numeros são positivos\n");
    }
    else{
        printf("pelo menos um dos numeros é negativo\n");
    }

    int c = 10;

    if (!(c > 0)){ //no if da linguagem C, todo valor diferente de 0, é contado como falso, então para entrar neste if teriamos que inverter o valor usando !
        printf("A variavel é negativa.\n");
    }
    else{
        printf("A variavel é positiva.\n");
    }


    int idade = 20;
    float altura = 1.75;

    if(idade >= 18 && idade <= 30 && altura > 1.70){
        printf("Você está na faixa etaria e tem a altura adequada.\n");
    }
    else{
        printf("Você não atende aos criterios.\n");
    }
}