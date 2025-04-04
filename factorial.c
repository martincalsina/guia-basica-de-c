#include <stdio.h>

int factorial(int n);

int main() {

    int n;
    printf("Ingrese un entero no negativo para calcular su factorial: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("El número ingresado no es válido \n");
    } else {
        int res = factorial(n);
        printf("EL resultado es %d \n", res);
    }


}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}