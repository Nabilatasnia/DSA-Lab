#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
#define MIN INT_MIN
int main()
{
    int size, max=MIN;
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);

}