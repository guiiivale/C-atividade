#include <stdio.h>


int main() {
    int inteiro1, inteiro2, inteiro3;
    int maiorNumero, menorNumero;

    printf("Digite um numero:");
    scanf("%d", &inteiro1);
    getchar();

    printf("Digite um numero:");
    scanf("%d", &inteiro2);
    getchar();

    printf("Digite um numero:");
    scanf("%d", &inteiro3);
    getchar();

    if(inteiro1 == inteiro2 && inteiro1 == inteiro3) {
        printf("Os números são iguais.");
        return 0;
    }

    if(inteiro1 == inteiro2 || inteiro1 == inteiro3 || inteiro2 == inteiro3) {
        printf("Existem números iguais.");
        return 0;
    }

    if(inteiro1 > inteiro2 && inteiro1 > inteiro3) {
        printf("O maior numero é o primeiro\n");
        maiorNumero = inteiro1;
        menorNumero = inteiro2;
        if(inteiro2 > inteiro3) {
            menorNumero = inteiro3;
        }
    }

    if(inteiro2 > inteiro1 && inteiro2 > inteiro3) {
        printf("O maior numero é o segundo\n");
        maiorNumero = inteiro2;
        menorNumero = inteiro1;
        if(inteiro1 > inteiro3) {
            menorNumero = inteiro3;
        }
    }

    if(inteiro3 > inteiro1 && inteiro3 > inteiro2) {
        printf("O maior numero é o terceiro\n");
        maiorNumero = inteiro3;
        menorNumero = inteiro2;
        if(inteiro2 > inteiro1) {
            menorNumero = inteiro1;
        }
    }

    printf("O maior numero é: %i\n", maiorNumero);
    printf("O menor numero é: %i\n", menorNumero);

    return 0;
}