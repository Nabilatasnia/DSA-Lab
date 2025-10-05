#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("How many elements do you want to add? ");
    scanf("%d", &size);
    int* ptr;
    ptr=malloc(size*sizeof(int));
    if(ptr==NULL) //memory couldn't get allocated
    {
        printf("Insufficient memory\n");
        free(ptr);
        return 1;
    }
    printf("Enter values: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &ptr[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);

}
