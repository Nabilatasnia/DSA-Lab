#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* address;
}node;
node* front=NULL;
node* rear=NULL;
void enqueue(int data)
{
    node* newNode=malloc(sizeof(node));
    if(newNode==NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data=data;
    newNode->address=NULL;
    if(rear==NULL)//queue is empty
    {
        front=rear=newNode;
    }
    else
    {
        rear->address=newNode;
        rear=newNode;
    }
    printf("%d was enqueued\n", data);
}
void dequeue()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    node* temp=front;
    printf("%d was dequeued\n", front->data);
    front=front->address;
    if(front==NULL)
    {
        rear=NULL;
    }
    free(temp);
}
void peek()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("The front element is %d\n", front->data);
}
void display()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: \n");
    node* current=front;
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
        printf("Queue using linked list\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
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
            enqueue(value);
            break;
            case 2:
            dequeue();
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