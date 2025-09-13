#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
#define MAX INT_MAX
int main()
{
    int size, min=MAX;
    scanf("%d", &size);
    int arr[size];

    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d\n",min);

}