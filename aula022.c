#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Ponteiros e matrizes

int main(){
    
    char mat[30], *point;

    printf("Entre com uma frase maiuscula: \n");
    scanf("%s",&mat);
    getchar();

    printf("Frase em letra minuscula: ");
    point = mat;

    while(*point) printf("%c",tolower(*point++));

    


    printf("\n\n");

    
    return 0;
}

/*
char mat[30];
    int i;

    printf("Entre com uma frase em letra maiuscula: \n");
    scanf("%s", &mat);
    getchar();

    printf("Frase minuscula: ");

    for(i = 0;mat[i];i++) printf("%c", tolower(mat[i]));

*/