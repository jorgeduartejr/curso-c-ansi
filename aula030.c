#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main(){
    struct minha_estrutura{
        int inteiro;
        double flutuante;

    }exemplo1, exemplo2;

    exemplo1.inteiro = 100;

    exemplo2 = exemplo1; // atribuindo uma struct a outra

    
    printf("%d \n", exemplo2.inteiro);
    
    
    
    return 0;


}