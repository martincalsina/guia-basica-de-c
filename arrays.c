#include <stdint.h>
#include <stdio.h>
#define N 4

int main() {
    int32_t a[N];
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;

    char s[] = "Hola!"; // s es el nombre del array
    char *u = "string"; // u es un puntero a un char
    printf("s = %s\n", s);
    printf("u = %s\n", u);
    s[0] = 'h'; // s = "hola!"
    u[0] = 'S'; // ERROR

    return 0;
}