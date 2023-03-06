#include <stdio.h>


int main() {
    int a, b, total;

    printf("Digite o primeiro número:");
    scanf("%d", &a);
    getchar();

    printf("Digite o segundo número:");
    scanf("%d", &b);
    getchar();

    total = (a+b)*(a+b);

    printf("O total é: %d", total);

    return 0;
}
