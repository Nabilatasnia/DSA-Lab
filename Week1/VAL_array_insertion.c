#include <stdio.h>

int main()
{
    int size, position, new;
    printf("How many numbers do you want to enter in array? ");
    scanf("%d", &size);
    int arr[size+1];

    printf("Enter the elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("In what position do you want to enter a new element? ");
    scanf("%d", &position);
    printf("Enter the new element\n");
    scanf("%d",&new);

    for(int i=size-1; i>=position;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position]=new;
    printf("New array\n");
    for(int i=0;i<size+1;i++)
    {
        printf("%d ",arr[i]);
    }
}