#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
#define MIN INT_MIN
int main()
{
    int* ptr;
    int size, max=MIN;
    scanf("%d", &size);
    ptr=malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        free(ptr);
        return 1;
    }
    for(int i=0;i<size;i++)
    {
        scanf("%d", &ptr[i]);
        if(ptr[i]>max)
        {
            max=ptr[i];
        }
    }
    printf("%d\n",max);
    free(ptr);
}