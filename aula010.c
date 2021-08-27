#include <stdio.h>
#include <stdlib.h>

int main(void){
    int opcao;
    int valor;

    printf("Converter: \n");
    printf("1: decimal para hexadecimal\n");
    printf("\n Informe a sua opção: ");
    scanf("%d", &opcao);
    fflush(stdin); //  melhor uso do que o getchar()

    switch (opcao)
    {
        case 1:
            printf("\n Informe o valor em decimal: ");
            scanf("%d", &valor);
            fflush(stdin);
            printf("\n%d em hexadecimal é: %x\n", valor, valor);
        break;

        case 2:
        printf("\nInforme o valor em hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("\n%x em decimal é: %d\n", valor, valor);
        break;
    
        default:
            printf("\n A opção é inválida!");
            break;

    }




}