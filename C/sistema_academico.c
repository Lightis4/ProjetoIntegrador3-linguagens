#include <stdio.h>

int main() {
    char nome[100];
    int matricula;
    float nota1, nota2, nota3, media;

    printf("Digite seu nome: ");
    scanf(" %99[^\n]", nome);

    printf("Digite sua matricula: ");
    if (scanf("%d", &matricula) != 1) {
        printf("Matricula invalida!\n");
        return 1;
    }

    printf("Digite a primeira nota: ");
    if (scanf("%f", &nota1) != 1) {
        printf("Nota invalida!\n");
        return 1;
    }

    printf("Digite a segunda nota: ");
    if (scanf("%f", &nota2) != 1) {
        printf("Nota invalida!\n");
        return 1;
    }

    printf("Digite a terceira nota: ");
    if (scanf("%f", &nota3) != 1) {
        printf("Nota invalida!\n");
        return 1;
    }

    if (nota1 < 0 || nota1 > 10 ||
        nota2 < 0 || nota2 > 10 ||
        nota3 < 0 || nota3 > 10) {
        printf("As notas devem estar entre 0 e 10!\n");
        return 1;
    }

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nAluno: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Media: %.2f\n", media);

    if (media >= 7) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 5) {
        printf("Situacao: Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
