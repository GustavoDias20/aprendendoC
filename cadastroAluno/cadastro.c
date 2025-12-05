#include <stdio.h>
#include <string.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome completo\n");
    fgets(nome,50,stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Digite sua idade\n");
    scanf("%i", &idade);
    printf("Digite sua altura\n");
    scanf("%f", &altura);
    printf("Digite sua matricula\n");
    scanf("%i", &matricula);

    printf("Nome do aluno: %s  matricula: %i\n idade: %i altura: %.2f", nome, matricula, idade, altura);
}