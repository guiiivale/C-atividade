#include <stdio.h>


int main() {
    int hora, segundo, minuto, segundos;

    printf("Digite a hora:");
    scanf("%d", &hora);
    getchar();

    printf("Digite o minuto:");
    scanf("%d", &minuto);
    getchar();

    printf("Digite o segundo:");
    scanf("%d", &segundo);
    getchar();

    if(hora > 23 || hora < 0) {
        printf("Hora inválida.");
        return 0;
    }

    if(minuto > 59 || minuto < 0) {
        printf("Minuto inválido.");
        return 0;
    }

    if(segundo > 59 || segundo < 0) {
        printf("Segundo inválido.");
        return 0;
    }

    if(hora > 0) {
        segundos = hora * 3600;
    }

    if(minuto > 0) {
        segundos = segundos + minuto * 60;
    }

    if(segundo > 0) {
        segundos = segundos + segundo;
    }

    printf("O horário em segundos é: %d", segundos);
    return 0;
}
