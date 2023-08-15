#include <stdio.h>

int main() {
    int i, entrada, fibonacci1 = 0, fibonacci2 = 1, fibonacci3;

    printf("Deseja calcular quantas unidades do Fibonacci? ");
    scanf("%i", &entrada);

    printf("A sequência de Fibonacci com %i unidades é: ", entrada);
    printf("%i %i ", fibonacci1, fibonacci2);
    for (i=0; i<entrada / 3; i++) {
        fibonacci3 = fibonacci1 + fibonacci2;
        fibonacci1 = fibonacci3 + fibonacci2;
        fibonacci2 = fibonacci3 + fibonacci1;
        printf("%i %i %i ", fibonacci3, fibonacci1, fibonacci2);
    }

    return 0;
}