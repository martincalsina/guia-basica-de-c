#include <stdio.h>

int main() {
    float numFloat = 0.2;
    double numDouble = 0.2;

    printf("float(%lu): %f \n", sizeof(numFloat), numFloat);
    printf("double(%lu): %f \n", sizeof(numDouble), numDouble);
}
