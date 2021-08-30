#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h> // #include <conio.h> para sistemas windows

// Estruturas de dados
/*
    struct
*/

struct componente
{
    char tipo[20];
    char referencia[4];
    unsigned char num_ref; // quando a variavel nao for superior a 255
    int valor; 
    char unidade[10];


};


struct componente  comp; // nome da variável de controle




int main(){

    printf("Tipo de componente ____________: ");
    fflush(stdin); // limpa os buffers do teclado
    fgets(comp.tipo,20,stdin); // pega a string com o tipo dela, no número máximo

    printf("Referencia do componente ____________: ");
    fflush(stdin); // limpa a entrada do teclado
    fgets(comp.referencia,4,stdin);

    printf("Número da referencia ____________: ");
    scanf("%c", &comp.num_ref); 
    // scanf para números fgets para strings

    printf("Valor do componente ____________: ");
    scanf("%d", &comp.valor);
    getchar();

    printf("Unidade ____________: ");
    fflush(stdin);
    fgets(comp.unidade,10,stdin);

    printf("\n\nCOMPONENTE CRIADO: \n\n");
    printf("%s", comp.tipo);
    printf("%s", comp.referencia);
    printf("%c ", comp.num_ref);
    printf("Valor: %d", comp.valor);

    printf(" %s \n\n", comp.unidade);







    
    
    
    
    
    return 0;
}