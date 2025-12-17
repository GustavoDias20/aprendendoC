#include <stdio.h>

int main() {
    int NotaB1, NotaB2, NotaB3, NotaB4, soma;
    float media;

    printf("Programa de Calculo de media de notas!\n");
    printf("Insira a nota do primeiro Bimestre\n");
    scanf("%d", &NotaB1);
    printf("Insira a nota do segundo Bimestre\n");
    scanf("%d", &NotaB2);
    printf("Insira a nota do terceiro Bimestre\n");
    scanf("%d", &NotaB3);
    printf("Insira a nota do quarto Bimestre\n");
    scanf("%d", &NotaB4);

    //convertendo explicitamente a variavel, que seriam inteiros, para float, para não ter perda na nota
    media = (float) (NotaB1 + NotaB2 + NotaB3 + NotaB4) / 4;

    printf("A media de notas é: %.2f", media);
}