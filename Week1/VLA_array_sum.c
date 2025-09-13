#include <stdio.h>
int main()
{
    int n;
    printf("How many elements do you want to enter? \n");
    scanf("%d", &n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("The sum is %d\n", sum);
}