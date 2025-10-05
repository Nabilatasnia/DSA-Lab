#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int number;
    struct node *next;
}node;
void printList(node *list)
{
    for(node *ptr=list;ptr!=NULL;ptr=ptr->next)
    {
        printf("%d ->", ptr->number);
    }
    printf("NULL");
}
int main()
{
    node *list;
    list=NULL;
    for(int i=0;i<4;i++)
    {
        int x;
        printf("Enter a value:");
        scanf("%d", &x);
        node *n=malloc(sizeof(node));
        if(n==NULL)
        {
            printf("Insufficient memory\n");
            return 1;
        }
        n->number=x;
        n->next=NULL;
        if(list==NULL)
        {
            list=n;
        }
        else
        {
            for(node *ptr=list;ptr!=NULL;ptr=ptr->next)
            {
                if(ptr->next==NULL)
                {
                    ptr->next=n;
                    break;
                }
            }
        }
    }

    printf("List: ");
    printList(list);

    node *ptr=list;
    while(ptr!=NULL)
    {
        node *temp=ptr->next;
        free(ptr);
        ptr=temp;
    }
}
