#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
#define MAX INT_MAX
int main()
{
    int* ptr;
    int size, min=MAX;
    scanf("%d", &size);
    ptr=malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
    }
    for(int i=0;i<size;i++)
    {
        scanf("%d", (ptr+i));
        if(ptr[i]<min)
        {
            min=ptr[i];
        }
    }
    printf("%d\n",min);
    free(ptr);
}