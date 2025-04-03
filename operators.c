#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf("a: %d b: %d c: %d d: %d \n", a, b, c, d);

    printf("a + b * c / d: %d \n", a + b * c / d);

    printf("a resto b: %d \n", a % b);

    printf("a == b: %x a != b: %x \n", a == b, a != b);

    printf("~a: %x \n", ~a); //da ffffffa, pues eso es 1111 1111 ... 1111 1010 y el 5 en esta base
    //es 0000 ... 0000 0101, me lo niego lógicamente bit a bit

    printf("a && b: %x a || b: %x \n", a && b, a || b); //yyy, no son bool, qcy

    printf("a << 1: %d \n", 5 << 1); //shit logico a izquierda, es multiplicar por 2

    printf("a >> 1: %d \n", 5 >> 1); //shit logico a derecha, 0101 pasa a 0010
    
    a += b;
    printf("a += b: %d \n", a);
    
    a=5;
    a-=b;
    printf("a -= b: %d \n", a);

    a=5;
    a*=5;
    printf("a *= b: %d \n", a);

    a=5;
    a/=b;
    printf("a /= b: %d \n", a);

    a=5;
    a%=b;
    printf("a resto b: %d \n", a);

    return 0;
}