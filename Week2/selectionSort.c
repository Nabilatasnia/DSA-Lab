#include <stdio.h>
#include <stdlib.h>
void selectionSort(int* arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
int main()
{
    int* arr;
    int n;
    printf("How many elements do you want to enter? ");
    scanf("%d", &n);
    arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}