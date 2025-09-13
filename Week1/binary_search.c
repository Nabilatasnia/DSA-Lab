#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr; 
    int size, item;
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
    printf("Which element are you searching for? ");
    scanf("%d", &item);
    int left=0, right=size-1, mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(ptr[mid]==item)
        {
            printf("Found\n");
            return 1;
        }
        else if(item<=ptr[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    printf("Item not found\n");
    free(ptr);
}