#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, nota3, media;

    printf("Menu de Gerenciamento de Estudantes\n");

    printf("1. Calcular Média\n 2. Determinar Status\n 3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", & opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a Média selecionado\n");
        printf("Digite a primeira nota: ");
        scanf("%f", & nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", & nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", & nota3);

        if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10)){
            media = (nota1 + nota2 + nota3) / 3;
            printf("A media é: %.2f", media);
        }
        else{
            printf("Entrada com valores errados de notas");
        }
        break;
    case 2:
        printf("Determinar status selecionado\n");
        printf("Entre com sua media de notas escolar: ");
        scanf("%f", & media);
        //media >= 5 ? printf("Aprovado!") : printf("Reprovado!");

        if(media >= 7){
            printf("Aprovado!");
        }
        else if(media >= 5){
            printf("Recuperação!");
        }
        else{
            printf("Reprovado!");
        }
        break;
    case 3:
        printf("Saindo do programa...\n");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
}