#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, item;
    printf("How many elements do you want to enter? ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Which element are you searching for? ");
    scanf("%d", &item);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==item)
        {
            printf("Found at position %d\n", i);
            return 1;
        }
    }
    printf("Item not found\n");

}