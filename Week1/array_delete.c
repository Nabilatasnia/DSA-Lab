#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int size, position;
    printf("How many elements do you want to enter? ");
    scanf("%d",&size);
    printf("Enter array elements");
    ptr=malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        free(ptr);
        return 1;
    }
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Which position do you want to delete?");
    scanf("%d", &position);
    for(int i=position; i<size-1;i++)
    {
        ptr[i]=ptr[i+1];
    }
    size--;
    printf("Array after deletion\n");
    for(int i=0;i<size;i++)
    {
        printf("%d", ptr[i]);
    }
    free(ptr);
}