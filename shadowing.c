#include <stdio.h>

int i; // inicializada a 0

void funcion() {
    int i = 1; // variable local
    printf("i = %d\n", i); // imprime 1
}
int main() {
    funcion();
    printf("i = %d\n", i); // imprime 0 pq el i variable local de funcion oculta al i global
    return 0;
}