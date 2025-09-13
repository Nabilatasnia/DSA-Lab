#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int size, position, new;
    printf("How many numbers do you want to enter in array? ");
    scanf("%d", &size);
    ptr=malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        free(ptr);
        return 1;
    }
    printf("Enter the elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("In what position do you want to enter a new element? ");
    scanf("%d", &position);
    printf("Enter the new element\n");
    scanf("%d",&new);

    ptr=realloc(ptr, (size+1)*sizeof(int));
    for(int i=size-1; i>=position;i--)
    {
        ptr[i+1]=ptr[i];
    }
    ptr[position]=new;
    printf("New array\n");
    for(int i=0;i<size+1;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int size, position, new;
    printf("How many numbers do you want to enter in array? ");
    scanf("%d", &size);
    ptr=malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        free(ptr);
        return 1;
    }
    printf("Enter the elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("In what position do you want to enter a new element? ");
    scanf("%d", &position);
    printf("Enter the new element\n");
    scanf("%d",&new);
    size=size+1;
    ptr=realloc(ptr, size*sizeof(int));
    for(int i=size-1; i>=position;i--)
    {
        ptr[i+1]=ptr[i];
    }
    ptr[position]=new;
    printf("New array\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
}