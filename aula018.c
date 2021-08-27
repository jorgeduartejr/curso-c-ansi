#include <stdio.h>
#include <stdlib.h>

#define DIML    5
#define DIMC    30

// tipo nome[dim1][dim2][dim3]...[dim N]

int  main(){
    int i, j;
    int nomes[DIML] [DIMC];
    for( i = 0; i < DIML; i++){
        printf("Entre com a linha %d: ", i);
        scanf("%s", nomes[i]);
    } 
    for(i = 0; i < DIML; i++){
        printf("O nome %d é :", i);
        printf(nomes[i]);
    }
    

    return 0;
}