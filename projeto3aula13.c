#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*

*/


int main(){
    int i = 0, j=1, resposta;
    int erros = 0, acertos = 0;
    char opcao;

    inicio:
        for (size_t j = 0; j <  10; j++)
        {
            printf("Qual a resposta %d + %d? ", i,j);
            scanf("%d", &resposta);
            fflush(stdin);
            if (resposta != (i + j)){
                erros++;
                printf("Resposta errada!\n");
            }
            else
            {
                acertos ++;
                printf("Resposta Correta!\n");

            } // end if/else
            
        } //end for

        printf("Acertos = %d\n", acertos);
        printf("Erros = %d\n", erros);
        
    meio:
        printf("Continuar respondendo? [S/N]");
        opcao = toupper(getchar());
        fflush(stdin);

        printf("\n");

        switch (opcao)
        {
        case 'S':
            i++;
            goto inicio;
            break;
        
        case 'N':
            goto fim;
            break;
        
        default:
        printf("Opção inválida\n");
        goto meio;

        } // end switch


    fim: 
    
    
    return 0;

}