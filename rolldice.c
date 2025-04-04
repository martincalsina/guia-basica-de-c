#include <stdio.h>
#include <stdlib.h>

int main() {

    int rolls = 6E7;
    int results[6] = {0};

    for(int i=0; i<rolls;i++) {
        int random_number = rand() % 6; //int entre 0 y 5
        results[random_number]++;
    }

    printf("Frecuencia de apariciones tras %d tiros \n", rolls);
    for(int i=0; i<6; i++) {
        printf("%d: %d \n", i+1, results[i]);
    }

    return 0;

}