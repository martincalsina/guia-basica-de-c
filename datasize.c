#include <stdint.h>
#include <stdio.h>

int main() {
    int8_t i8 = 127;
    int16_t i16 = 255;
    int32_t i32 =  65535;
    int64_t i64 = 4294967295;

    printf("int8(%lu): %d \n", sizeof(i8), i8);
    printf("int16(%lu): %d \n", sizeof(i16), i16);
    printf("int32(%lu): %d \n", sizeof(i32), i32);
    printf("int64(%lu): %ld \n", sizeof(i64), i64);

    uint8_t ui8 = 255;
    uint16_t ui16 = 65535;
    uint32_t ui32 = 4294967295;

    printf("uint8(%lu): %u \n", sizeof(ui8), ui8);
    printf("uint16(%lu): %u \n", sizeof(ui16), ui16);
    printf("uint32(%lu): %u \n", sizeof(ui32), ui32);

    return 0;

}