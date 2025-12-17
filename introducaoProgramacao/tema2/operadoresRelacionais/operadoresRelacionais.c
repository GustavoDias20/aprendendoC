#include <stdio.h>

int main(){
    /*
    > (maior que)
    < (menor que)
    >= (maior ou igual a)
    <= (menor ou igual a)
    == (igual a)
    != (diferente de)
    */

    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    /*
    comparando diferentes tipos de variaveis

    comparação com conversão implicita
    */

    printf("comparando diferentes tipos de variaveis\n");

    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é: %d\n", c, c);

    /*
    comparação com conversão explicita (casting)
    */

    printf("comparação com casting\n");

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 >= numero2: %d\n", (int) numero1 >= numero2);
    printf("numero1 == numero2: %d\n", (int) numero1 == numero2);
}