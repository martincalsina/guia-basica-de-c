#include <stdio.h>

int main() {

    int a[] = {1, 3, 5, 7, 9};

    size_t length = sizeof(a) / sizeof(int); //longitud de a

    int b[length];

    for (int i = 0; i < length; i++) {
        b[length-i-1] = a[i];
    }

    printf("Array antes \n");
    printf("[ ");
    for(int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    printf("] \n");

    printf("Array despues \n");
    printf("[ ");
    for(int i = 0; i < length; i++) {
        printf("%d ", b[i]);
    }
    printf("] \n");

    return 0;
}