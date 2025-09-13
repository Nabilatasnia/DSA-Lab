#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int size;
    printf("How many elements do you want to enter? ");
    scanf("%d", &size);
    ptr=malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        free(ptr);
        return 1;
    }
    printf("Enter array elements: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &ptr[i]);
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ", ptr[i]);
    }

}