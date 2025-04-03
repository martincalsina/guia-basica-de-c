#include <stdio.h>
// Q hace esto?
int main() {

    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
        102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
        103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
        111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};
        
    
    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    //sizeof(mensaje_secreto) es el tamaño en bytes de mensaje_secreto. Como son ints, será cant_de_elems*4bytes
    //sizeof(int) = 4bytes
    //luego, sizeog(mensaje_secreto) / sizeof(int) = cant_de_elems*4bytes / 4bytes = cant_de_elems = length
    //size_t en particular es el tipo de dato unsigned int para los size of. Como es una longitud, no quiero signo, ya sé que es no negativo

    char decoded[length]; //arreglo de chars con tantos elems como ints encriptados en mensaje_secreto

    for (int i = 0; i < length; i++) {
        //aunque sean ints, sus valores son tal que se pueden representar en 1 byte, por lo que en un char entran
        decoded[i] = (char) (mensaje_secreto[i]); // casting de int a char
    }

    for (int i = 0; i < length; i++) {
        printf("%c", decoded[i]); //printeame estos numeros como ints uno seguido a otro!
    }

    printf("\n");
}