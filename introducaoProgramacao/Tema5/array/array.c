#include <stdio.h>

int main(){
    float notas[3] = {85.5, 90.0, 78.3}; // array de notas
    for (int i = 0; i < 3; i++){
        printf("Nota do aluno %d é: %.1f \n", i+1, notas[i]);
    }

    char letras[4] = {'A', 'B', 'C', 'D'}; // array de letras
    for (int i = 0; i < 4; i++){
        printf("%dº letra: %c \n", i+1, letras[i]);
    }

    char *nomes[] = {"Alice", "Bob", "Carol"};

    for (int i = 0; i < 3; i++){
        printf("%s \n", nomes[i]);
    }
}