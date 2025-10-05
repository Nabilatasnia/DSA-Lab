#include <stdio.h>
void merge_sort(int arr[], int left, int right);
void merge(int arr[], int left, int right, int mid);
int main()
{
int arr[]={65, 2, 40, 18, 30, 9}, n = 6;
merge_sort(arr, 0, n-1);
for(int i = 0; i < n; i ++)
printf("%d ", arr[i]);
printf("\n");
}
void merge(int arr[], int left, int right, int mid)
{
int n1=mid-left+1;//[left .... mid]
int n2=right-mid;//[mid+1 ... right]
int arr_left[n1], arr_right[n2];
for(int i = 0; i < n1; i ++)
arr_left[i]=arr[left+i];
for(int j = 0; j <n2; j ++)
arr_right[j]=arr[mid+1+j];
int i = 0, j = 0, k = left;
while(i < n1 && j < n2)
{
if(arr_left[i]<=arr_right[j])
{
arr[k]=arr_left[i];
i++;
}
else
{
arr[k]=arr_right[j];
j++;
}
k++;
}
while(i<n1)
{
arr[k]=arr_left[i];
i++;
k++;
}
while(j<n2)
{
arr[k]=arr_right[j];
j++;
k++;
}
}
void merge_sort(int arr[], int left, int right)
{
int mid;
if(left<right)
{
mid=left+(right-left)/2;
merge_sort(arr, left, mid);
merge_sort(arr, mid+1, right);
merge(arr, left, right, mid);
}
}