#include <stdio.h>

int main() {

    int a[] = {1, 3, 5, 7, 9};
    int rotation = 2; //rotation < length de array, si no, tomo el modulo respecto del length del array

    size_t length = sizeof(a) / sizeof(int); //longitud de a

    int b[length];
    
    //b[0] = b[length-rotation-i]
    for(int i=0; i < rotation; i++) {
        b[i] = a[length-rotation-i+1];
    }


    for (int i = 0; i < length-rotation; i++) {
        b[i+rotation] = a[i];
    }

    printf("Shifteo de %d posiciones a derecha \n", rotation);

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