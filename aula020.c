#include <stdio.h>
#include <stdlib.h>

// ponteiros: &  e *
// tipo *nome;

int main(){
    int variavel = 250; // variavel inteira com o valor 250
    int *ponteiro;      // ponteiro para a variável
    int exibe;          // variavel que vai exibir o valor 250

    ponteiro = &variavel; // ponteiro está apontando para o enderço da variavel
    exibe = *ponteiro;  // a variável exibe recebe o conteudo do endereço para qual o ponteiro aponta

    // 250

    printf("\n %d \n", exibe);
    






    return 0;
}