#include <stdio.h>
int main()
{
    int size, item;
    printf("How many elements do you want to enter? ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Which element are you searching for? ");
    scanf("%d", &item);
    int left=0, right=size-1, mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==item)
        {
            printf("Found\n");
            return 1;
        }
        else if(item<=arr[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    printf("Item not found\n");

}