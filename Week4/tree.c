#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

node* createNode(int value)
{
    node* newNode=malloc(sizeof(node));
    if(newNode==NULL)
    {
        printf("Memory allocation faqiled\n");
        return;
    }
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
} 
node* insert(node* root, int value) {
    if (root == NULL) return createNode(value);

    if (root->left == NULL) {
        root->left = insert(root->left, value);
    } else if (root->right == NULL) {
        root->right = insert(root->right, value);
    } else {
        root->left = insert(root->left, value);
    }

    return root;
}
node* findLeftmost(node* root) {
    if (!root->left && !root->right) return root;
    if (root->left) return findLeftmost(root->left);
    return findLeftmost(root->right);
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
node* deleteNode(node* root, int key) {
    if (root == NULL) return NULL;

    if (root->data == key) {
        if (!root->left && !root->right) {
            free(root);
            return NULL;
        }
        node* replacement = findLeftmost(root);
        root->data = replacement->data;

        root->left = deleteNode(root->left, replacement->data);
        root->right = deleteNode(root->right, replacement->data);

        return root;
    }

    root->left = deleteNode(root->left, key);
    root->right = deleteNode(root->right, key);
    return root;
}
int main() {
    node* root=NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    printf("Preorder before deletion: ");
    preorder(root);
    printf("\n");

    root = deleteNode(root, 3);

    printf("Preorder after deleting 3: ");
    preorder(root);
    printf("\n");

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}