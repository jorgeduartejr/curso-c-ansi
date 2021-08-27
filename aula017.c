#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Strings == cadeia de caracteres

int main(void){
    char nome[51], sobrenome[51];
    int comp1, comp2;


    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    comp1 = strlen(nome);
    getchar();

    printf("Digite o seu sobrenome: ");
    scanf("%s", &sobrenome);
    comp2 = strlen(sobrenome);
    getchar();


    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("Olá %s!\n",nome);

    printf("Seu nome tem %d caracteres e seu sobrenome tem %d caracteres\n", comp1, comp2);

    

}

