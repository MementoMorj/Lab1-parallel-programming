#include <stdio.h>
#include "Typedef.h"
void outputArr(){
    int i,j;
    for(i = 0; i < n; i++ ){
        for(j = 0; j < n ; j++ )
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
    printf("\n");
}
