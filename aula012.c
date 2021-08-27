#include <stdio.h>
#include <stdlib.h>

// Aplicações não convencionais do laço for

// Utilizar mais uma variável no laço for

// Imprimir os números pares de 0 a 100

int main (void){

    int i,j;
    for (size_t i = 0,j = 0;i + j <= 100; i++,j++)
    {
        printf("%d\n", i + j);
    }
    

}