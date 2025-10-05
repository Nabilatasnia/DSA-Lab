#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* address;
}node;
node* top=NULL;
void push(int value)
{
    node* newNode=malloc(sizeof(node));
    if(newNode==NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data=value;
    newNode->address=top;
    top=newNode;
    printf("%d was pushed\n", value);
}
void pop()
{
    if(top==NULL)
    {
        printf("stack is empty\n");
        return;
    }
    node* temp=top;
    printf("%d is popped\n", top->data);
    top=top->address;
    free(temp);

}
void peek()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element is %d\n", top->data);
}
void display()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    node* current=top;
    printf("The stack elements are: \n");
    while(current!=NULL)
    {
        printf("%d\n", current->data);
        current=current->address;
    }
}
int main()
{
    int choice, value;
    while(1)
    {
        printf("Stack using linked list\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            push(value);
            break;
            case 2:
            pop();
            break;
            case 3: 
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default:
            printf("Invalid choice\n");
        }
    }
}