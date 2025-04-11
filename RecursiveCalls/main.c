#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int val;
struct node *left, *right;
} node;
int foo(node *p) {
int retval;
if (p == NULL)
return 0;
else {
retval = p->val + foo(p->left) + foo(p->right);
printf("%d ", retval);
return retval;
}
}

// Helper to create a new node
node* newNode(int val) {
    node* temp = (node*)malloc(sizeof(node));
    temp->val = val;
    temp->left = NULL;
    temp->right = NULL; // ✅ Fix here
    return temp;
}

int main() {
    // Construct a left-skewed tree:
    //       10
    //      /   \
    //     5     11
    //    / \      \
    //   3  8       13

   node *root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(11);
    root->left->left = newNode(3);
    root->left->right = newNode(8);
    root->right->right = newNode(13);
    printf("Output: ");
     printf("\n");
    foo(root);  // Call the function
    printf("\n");

    return 0;
}

