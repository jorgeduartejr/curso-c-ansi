#include <stdio.h>
#include <stdlib.h>

// criar um vetor e organizar os dados
// os dados do vetor devem ser exibidos em forma crescente

#define tam 5
#define falso 0
#define verdadeiro 1

int main(){
    int vetor[tam], i, change = falso, final = tam, store;
    printf("Entre com um vetor de %d elementos\n", tam);
    for (size_t i = 0; i < tam; i++)
    {
        printf("Elemento %d ", i);
        scanf("%d", &vetor[i]);
        getchar();
    } // end for
    do
    {
        change = falso;
        for (size_t i = 0; i < final; i++)
        {
            if (vetor[i] > vetor[i + 1])   // vetor[0] = 5, vetor[1] = 2
            {
                store = vetor [i];         // store = 5
                vetor[i] = vetor [ i + 1]; // vetor [0] = 2
                vetor[i + 1] = store;      // vetor[1] = 5
                change = verdadeiro;
            }
            
        } // end for
        
    } while (change);
    for (size_t i = 0; i < tam; i++)
    {
       printf("%d\n", vetor[i]);
    }
    
    

 
    return 0;
}

