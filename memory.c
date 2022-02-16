#include<stdlib.h>
#include"Typedef.h"



void make_arr()
{
    arr = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; ++i)
    {
        *(arr+i) = (int*)malloc(n * sizeof(int));
    }
}

void del_arr()
{
    for(int i = 0;i < n; ++i)
    {
        free(arr[i]);
    }
    free(arr);
}
