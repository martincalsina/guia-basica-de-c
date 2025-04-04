#include <stdio.h>
#define FELIZ 0
#define TRISTE 1

void ser_feliz(int estado);
void print_estado(int estado);

int main(){
    int estado = TRISTE; // automatic duration. Block scope
    ser_feliz(estado);
    print_estado(estado); // qué imprime?
}

void ser_feliz(int estado){
    estado = FELIZ;
}

void print_estado(int estado){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}

//está printeando estoy triste porque en ser_feliz el estado = feliz no modifica a la variable
//estado en el main, ya que se pasa por valor, no referencia. Está modificando al
//parámetro que toma la función ser_feliz