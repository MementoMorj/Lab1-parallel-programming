#include <stdio.h>
#include "Typedef.h"
#include <getopt.h>
#include <stdlib.h>

void findAndSwapRelease()
{
    int max_element=0, min_element=0, i, tmp;

    for(i=0; i<n; i++)
    {
        if (arr[n-i-1][i]<arr[n-min_element-1][min_element])
            min_element=i;
    }

    for(i=0; i<n; i++)
    {
        if (arr[n-i-1][i]>=arr[n-max_element-1][max_element])
            max_element=i;
    }

    tmp=arr[n-min_element-1][min_element];
    arr[n-min_element-1][min_element]=arr[n-max_element-1][max_element];
    arr[n-max_element-1][max_element]=tmp;

}

void findAndSwapDebug()
{
    int max_element=0, min_element=0, i, tmp;

    for(i=0; i<n; i++)
    {
        if (arr[n-i-1][i]<arr[n-min_element-1][min_element])
            min_element=i;
        printf("min element is %d on position [%d][%d]\n",arr[n-min_element-1][min_element], n-min_element-1, min_element);
    }
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        if (arr[n-i-1][i]>=arr[n-max_element-1][max_element])
            max_element=i;
        printf("max element is %d on position [%d][%d]\n",arr[n-max_element-1][max_element], n-max_element-1, max_element);
    }
    printf("\n\n");
    printf("Success!!!!! \nFinal results:\nmin element is %d on position [%d][%d]\nmax element is %d on position [%d][%d]",arr[n-min_element-1][min_element], n-min_element-1, min_element,arr[n-max_element-1][max_element], n-max_element-1, max_element);
    tmp=arr[n-min_element-1][min_element];
    arr[n-min_element-1][min_element]=arr[n-max_element-1][max_element];
    arr[n-max_element-1][max_element]=tmp;
    printf("\nResult:\n");
}

char verbose_flag(int argc,char*argv[])
{
    char choise='r';
    char options;
    while((options = getopt(argc,argv, "drn:"))!=-1)
    {
        switch(options)
        {
        case'r':
            choise = 'r';
            break;

        case'd':
            choise = 'd';
            break;

        case'n':
            n = atoi(optarg);
            break;
        }
    }
    return choise;
}






























