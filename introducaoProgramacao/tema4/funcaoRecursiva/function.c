#include <stdio.h>
#include <windows.h>

void recursivo(int numero){
    if(numero > 0){
        printf("%d\t", numero);

        Sleep(1000); // aguarda 1000 milissegundos o equivalente a 1 segundo
        recursivo(numero - 1); // a função somente passa a ser recursiva quando ela chama ela mesma dentro da função
        Sleep(1000);
        printf("%d\t", numero);

        //caso inverter, e colocarmos o print depois da chamada da função, ele começará a imprimir em ordem crescente
        //pois a ultima variavel a sair no print, é a primeira que entra, nesse caso, 10, lembrando que isso somente se colocar o print depois da chamada da função
    }
}

int main (){

    int quantidade = 10;

    printf("CONTAGEM REGRESSIVA: \t");
    recursivo(quantidade);
    
    return 0;
}