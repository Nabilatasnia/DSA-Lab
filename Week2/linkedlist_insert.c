#include <stdio.h>
#include <stdlib.h>
typedef struct node{
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
node* insertFront(node *list, int value)
{
    node *n=malloc(sizeof(node));
    if(n==NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    n->number=value;
    n->next=list;
    return n;   
}
//list=insertFront();||list=n;
void insertEnd(node *list, int value)
{
    node *n=malloc(sizeof(node));
    if(n==NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    n->number=value;
    n->next=NULL;
    if(list==NULL)
    {
        list=n;
        return;
    }
    node *ptr=list;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=n;
}
void insertAfter(node *list, int target, int value)
{
    node *curr=list;
    while(curr!=NULL && curr->number!=target)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
        printf("Element was not found\n");
        return; 
    }
    node *n=malloc(sizeof(node));
    if(n==NULL)
    {
        printf("Memory allocation failed");
        return;
    }
    n->number=value;
    n->next=curr->next;
    curr->next=n;
}
int main()
{
    node *list=NULL;
    int choice, value, target;
    for(int i=0;i<4;i++)
    {
        node *n=malloc(sizeof(node));
        if(n==NULL)
        {
            printf("Memory allocation failed\n");
        }
        n->number=value;
        n->next=NULL;
        printf("Enter value: ");
        scanf("%d", &value);
        if(list==NULL)
        {
            list=n;
        }
        else
        {
            insertEnd(list, n);
        }        
    }
    printf("Initial list: ");
    printList(list);

    printf("Where do you want to insert?\n");
    printf("1. At the front\n");
    printf("2. At the end\n");
    printf("3. After a specific element\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("Enter the value you want to insert: ");
    scanf("%d", &value);
    if(choice==1){
        list=insertFront(list, value);
    }
    else if(choice ==2)
    {
        insertEnd(list, value);
    }
    else if(choice == 3)
    {
        printf("After which element? ");
        scanf("%d", &target);
        insertAfter(list, target, value);
    }
    else{
        printf("Invalid choice\n");
    }
    printf("Updated list:");
    printlist(list);
    node *ptr=list;
    while(ptr!=NULL)
    {
        node *next=ptr->next;
        free(ptr);
        ptr=next;
    }
}