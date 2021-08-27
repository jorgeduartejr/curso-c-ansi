// Sistema de Banco de dados simples
// Seleciona vendedores por região

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <ncurses.h>


int main(){
    char regiao, vendedor;

    printf("Regiões: Leste, Oeste e Norte\n");
    printf("Informe a primeira letra da região: ");
    regiao = getchar(); // semelhante a função scanf
                       // lê um comando do teclado

    regiao = toupper(regiao); // converte as letras digitas em maiúscula
    printf("\n");

    switch (regiao)
    {
    case 'L':
        printf("Vendedores: Ricardo, José e Mariana.\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getchar());
        printf("\n");
        fflush(stdin);
        switch (vendedor)
        {
            case 'R':
                printf("Vendas: R$%d\n", 5000);
                break;
        
            case 'J':
                printf("Vendas: R$%d\n", 15000);
                break;
            
            case 'M':
                printf("Vendas: R$%d\n", 18000);
                break;
        } 
        break; // end switch aninhado

        
    
    

    case 'O':
        printf("Vendedores: Rafael, Joana e Pedro.\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getchar());
        printf("\n");
        fflush(stdin);
        
        switch (vendedor)
        {
            case 'R':
                printf("Vendas: R$%d\n", 7000);
                break;
        
            case 'J':
                printf("Vendas: R$%d\n", 19000);
                break;
            
            case 'P':
                printf("Vendas: R$%d\n", 21000);
                break;
        } 
        break; // end switch aninhado

        case 'N':
        printf("Vendedores: Fabiana, Gabriela e Roberto.\n");
        printf("Informe a primeira letra do vendedor: ");
        vendedor = toupper(getchar());
        printf("\n");
        fflush(stdin);
        switch (vendedor)
        {
            case 'F':
                printf("Vendas: R$%d\n", 3000);
                break;
        
            case 'G':
                printf("Vendas: R$%d\n", 19000);
                break;
            
            case 'R':
                printf("Vendas: R$%d\n", 1000);
                break;
        } 
        break; // end switch aninhado

        
    
    default:
        break;
    }
    
    
    

return 0;
}