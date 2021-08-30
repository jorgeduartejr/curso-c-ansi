#include <stdio.h>
#include <stdlib.h>

// estrutura de dados
struct clock{
    int horas;
    int minutos;
    int segundos;

};
// protótipo das funções auxiliáres
void delay();
void update(struct clock *t);
void display(struct clock *t);

// função principal
int main(){
    // variável da estrutura
    struct clock time;

    // inicializa os dados da estrutura
    time.horas = 0;
    time.minutos = 0;
    time.segundos = 0;

    for ( ; ; ){ // loop infinito
        update(&time);
        display(&time);
        delay();
        system("clear");


    } // end for


    return 0;
} // end main


// desenvolvimento das funcs auxiliares

void delay(){
    long t;

    for (t = 1; t<1000000000;t++); // atraso do código

}

void update (struct clock *t){

    t -> segundos++; // operador seta, sendo utilizado quando tiver um ponteiro

    if(t -> segundos == 60){
        t -> segundos = 0;
        t -> minutos++;
    }

    if(t -> minutos == 60){

        t -> minutos = 0;
        t -> horas++;   
    }

    if (t -> horas == 24) t -> horas = 0;

    delay();


}

void display(struct clock *t){

    printf("%d:", t ->horas);
    printf("%d:", t ->minutos);
    printf("%d\n", t ->segundos);



}