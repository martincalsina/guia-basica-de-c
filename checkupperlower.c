#include <stdio.h>
#include <stdint.h>

//dadas dos words de 32 bits, vamos a chequear si los 3 bits más significativos de una
//son iguales a los 3 menos significativos de la otra

int main() {
    //32bits
    int32_t w1 = 0xfffffff0;
    int32_t w2 = 0x0000000f;

    int32_t mask_3_lower = 0x00000007; // 7 en bits es 0111

    //esto sale usando masks para obtener los bits mas altos y mas bajos o con shifts
    //hago uno y uno por conveniencia

    int32_t w1_shifted = w1 >> 28; // shifteate 29 veces a derecha, ojo que es un shifteo aritmetico, por lo que rellena a izquierda con los bits de signo

    int32_t w1_selection = mask_3_lower & w1_shifted;
    int32_t w2_selection = mask_3_lower & w2;

    printf("w1: %x w2: %x  \n w1 shifted: %x \n w1 upper bits: %x w2 lower bits: %x \n", w1, w2, w1_shifted, w1_selection, w2_selection);
    
    //pruebo hacerlo al reves para ver q funque
    int32_t w2_shifted = w2 >> 28;

    int32_t w1_selection_2 = mask_3_lower & w1;
    int32_t w2_selection_2 = mask_3_lower & w2_shifted;
    printf("w1: %x w2: %x \n w2 shifted: %x \n w1 lower bits: %x w2 upper bits: %x  \n", w1, w2, w2_shifted, w1_selection_2, w2_selection_2);

    


    
}