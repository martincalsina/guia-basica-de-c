#include <stdio.h>

int main() {
    int castToInt = (int) 4.1;
    float castToFloat = (float) 1;

    printf("int(%lu): %d \n", sizeof(castToInt), castToInt);
    printf("float(%lu): %f \n", sizeof(castToFloat), castToFloat);

    //como los numero son casteables (onda, 1.0 se pasa como 1 y chau, el entero a float tmb) los toma chill
    //cambiando el 1.0 por 2.2, veo que se queda con la parte entera al castear float a int
}
