#include <stdio.h>
int main() {
    
    int i = 10;

    printf("Imprime los números del 9 al 0 con un while \n");

    while(i--){ //OJO que i-- devulve el valor de i antes de restarsele 1. ES --i el que te devuelve el actualizado de una
        //por lo que cuando sea i=1, hace i-- le resta, efectivame, 1 y lo hace 0, pero i-- devuelve 1
        printf("i = %d\n",i);
    }

    printf("Lo mismo pero con for \n");

    for(int i = 9; i >= 0; i--) {
        printf("i = %d\n", i);
    }

    return 0;
}