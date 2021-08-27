#include <stdio.h>
#include <stdlib.h>

int main(){
    int var;
    int *point1;
    int **point2;
    // int ***point3; pode ser usado, porém não é muito utilizado

    var = 15;
    point1 = &var;
    point2 = &point1;

    printf("\n%d\n", **point2); // 15



    return 0;
}