#include <stdio.h>

int main()
{
    int size;
    printf("How many elements do you want to enter? ");
    scanf("%d",&size);
    int arr[size];
    int position;
    
    printf("Enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Which position do you want to delete?");
    scanf("%d", &position);
    for(int i=position; i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Array after deletion\n");
    for(int i=0;i<size-1;i++)
    {
        printf("%d ", arr[i]);
    }

}