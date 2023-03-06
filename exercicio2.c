#include <stdio.h>


int main() {
    float trabalho, prova, media;

    printf("Digite a nota do trabalho:");
    scanf("%f", &trabalho);
    getchar();

    printf("Digite a nota da prova:");
    scanf("%f", &prova);
    getchar();

    media = 0.4 * prova + 0.6 * trabalho;

    printf("Média final: %.2f\n", media);

    // Verificação se o aluno foi aprovado ou reprovado
    if (media >= 70) {
        printf("Aluno aprovado!\n");
        return 0;
    }

    if(media < 70) {
        printf("Aluno reprovado!\n");
        return 0;
    }
}