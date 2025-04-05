#include "funca.h"

int main() {
    a();
}

/*Al momento de convertir los archivos .c a .o lenguaje de maquina,
gcc -c myfile.c -o myfile.o,
main.c no da error porque en funca.h se declara a a(), por más que nos e haya definido.
Es en el siguiente paso, con el linked para el pasaje al ejecutable binario,
gcc main.o funca.o -o binario
que se busca la implementación de a() en funca.o para usarla en main.o*/