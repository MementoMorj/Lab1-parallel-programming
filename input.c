#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Typedef.h"
void inputRand(){
    int i,j;
    srand(time(0));
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            arr[i][j]=-50 + rand() % 100;
        }
    }
}
void inputSorted() {
    int i,j;
    inputRand();
    double number = 0;
    for(i = 0; i < n ; i++) {
        for(j = 0; j < n; j++) {
            arr[i][j] = number;
            number++;
        }
    }
}
void inputKeyboard(){
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
