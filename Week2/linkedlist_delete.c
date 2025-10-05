#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

void printList(node *list) {
    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        printf("%d -> ", ptr->number);
    }
    printf("NULL\n");
}

int main() {
    node *list = NULL;

    for (int i = 0; i < 4; i++) {
        int x;
        printf("Enter a value: ");
        scanf("%d", &x);

        node *n = malloc(sizeof(node));
        if (n == NULL) {
        printf("Memory allocation failed!\n");
        return;
        }
        n->number = x;
        n->next = NULL;

        if (list == NULL) {
            list = n;
        } else {
            node *ptr = list;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = n;
        }
    }

    printf("Initial list:\n");
    printList(list);

    int pos;
    printf("Which position do you want to delete? ");
    scanf("%d", &pos);

    if (pos <= 0) {
        printf("Invalid position!\n");
    } else if (pos == 1) {
        node *temp = list;
        list = list->next;
        free(temp);
    } else {
        node *temp = list;
        node *prev = NULL;

        for (int i = 1; i < pos && temp != NULL; i++) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Position out of range!\n");
        } else {
            prev->next = temp->next;
            free(temp);
        }
    }

    printf("Updated list:\n");
    printList(list);
    node *ptr = list;
    while (ptr != NULL) {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

}
