#include <stdio.h>
#include <stdlib.h>

/*
    Passando structs para funções
*/


struct estrutura{
    int a,b;
    char c;



};

void  imprimir(struct estrutura parametro){
    printf("%c\n", parametro.c);

}


int main(){


    struct estrutura argumento;
    argumento.c = 't';

    imprimir(argumento);
    
    
    
    return 0;
}