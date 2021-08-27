#include <stdio.h>
#include <stdlib.h>

// ponteiros (indexação)

int main(){
    int mat[10] = {1,2,3,4,5,6,7,8,9,10};

    int *point, i;
    point = mat;


    for(i=0;i<10;i++) printf("%d\n", *(point + i));
    

    return 0;
}