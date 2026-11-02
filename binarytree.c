#include <stdio.h>
#include <stdlib.h>

// Define a structure for a binary tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function to search for a value in the BST
struct Node* search(struct Node* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }
    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Function to perform an in-order traversal (prints elements in ascending order)
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    // Insert elements into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("In-order traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");

    // Search for elements
    int searchVal1 = 40;
    if (search(root, searchVal1) != NULL) {
        printf("%d found in the BST.\n", searchVal1);
    } else {
        printf("%d not found in the BST.\n", searchVal1);
    }

    int searchVal2 = 90;
    if (search(root, searchVal2) != NULL) {
        printf("%d found in the BST.\n", searchVal2);
    } else {
        printf("%d not found in the BST.\n", searchVal2);
    }

    // Remember to free allocated memory in a real application to prevent memory leaks.
    // For simplicity, deletion and memory deallocation are omitted here.

    return 0;
}

