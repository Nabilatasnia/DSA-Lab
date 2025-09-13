#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int size, sum=0;
    scanf("%d", &size);
    ptr=malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
    }
    for(int i=0;i<size;i++)
    {
        scanf("%d", (ptr+i));
        sum+=*(ptr+i);
    }
    printf("The sum is %d\n", sum);
    free(ptr);
}