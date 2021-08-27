#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// continue

// maquina de codificação

void codifica(); // protótipo da função

int main(){
    
    printf("Entrar com as letras para codificar\n");
    printf("Digite $ para sair.\n");
    codifica();

    
    
    
    
    return 0;
} // end main

void codifica(){
    char ok = 0, ch;
    while (!ok) // while ok == 0
    {
        ch = getchar();
        if (ch == '$'){
            ok = 1;
            continue;
        }
        printf("%c", ch + 2);
    }
    
} // end codifica

