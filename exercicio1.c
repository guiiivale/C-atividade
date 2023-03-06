#include <stdio.h>


int main() {
    float raio, altura;
    float pi = 3.14;

    printf("Digite o raio da base do cilindro:");
    scanf("%f", &raio);
    getchar();

    printf("Digite a altura do cilindro:");
    scanf("%f", &altura);
    getchar();

    float areaBase = pi * raio * raio;
    float volume = areaBase * altura;

    if(volume < 1000) {
        printf("O volume é: %0.2f cm3", volume);
        printf("\nInsuficiente.");
        return 0;
    } 

    if(volume >= 1000) {
        printf("O volume é: %0.2f cm3", volume);
        printf("\nSuficiente.");
        return 0;
    }
}
