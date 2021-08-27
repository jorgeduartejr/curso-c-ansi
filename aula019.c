#include <stdio.h>
#include <stdlib.h>

#define dim 5
// int vetor[] = {10,5.8.9};
/* int vetor[3] = {3,
                    4,
                    5}; 
*/

int main(){
    int vetor1[dim] = {4,5,6,7,7};
    int vetor2 = {15,13,12,12,-1};
    int vetor3 = {12,34,34,23,23,23,12,34,54,53};

    unsigned i, tamanho; // unsigned implicitamente diz que é inteiro

    printf("\n Vetor com o tamanho pré definido\n");
    for( i = 0; i < dim; i++)
    {
        printf("Elemento %d = %d\n", i, vetor1[i]);
    }

    printf("\n Vetor terminando em -1\n");

    for( i = 0; vetor2[i] > 0; i++)
    {
        printf("Elemento %d = %d\n", i, vetor2[i]);

    }
    printf("\nImprimir o vetor com tamanho desconhecido\n");
    tamanho = sizeof(vetor3) / sizeof(int); /* sizeof retorna o tamanho do vetor em bits, 
    logo dividindo pelo tamanho em int retorna 
    o número de parametros que o vetor contem*/
    for( i = 0; i < tamanho; i++)
    {
        printf("Elemento %d = %d\n", i, vetor3[i]);
    } // end for


    return 0;
}