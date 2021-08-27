#include <stdio.h>
#include <stdlib.h>

int main(void){
    int opcao;
    int valor;
    printf("Conversor de Bases Numéricas\n");
    printf("1:  decimal para hexadecimal\n");
    printf("2:  hexadecimal para decimal\n");
    printf("\n\n Informe a opção: ");
    scanf("%d", &opcao);
    getchar();

    if( opcao == 1){
        
        printf("\nInforme o valor em decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em hexadecimal é: %x", valor, valor); // %x converte diretamente o valor da viariável para hexadecimal
        
    }
    else if (opcao == 2){
        printf("\n Informar o valor em hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("%x em decimal é: %d", valor, valor);

    }
    else printf("\n Sua opção é inválida!");

    
}