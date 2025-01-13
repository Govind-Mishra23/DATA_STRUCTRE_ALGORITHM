#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createNode(int val) {
    struct TreeNode* makeNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    makeNode->val = val;
    makeNode->left = NULL;
     makeNode->right = NULL;
    return  makeNode;
}

void preorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->val);  
    preorderTraversal(root->left);  
    preorderTraversal(root->right);  
}

void postorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);  
    postorderTraversal(root->right);  
    printf("%d ", root->val);  
}

void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left); 
    printf("%d ", root->val);  
    inorderTraversal(root->right);  
}



int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    preorderTraversal(root);
    printf("\n");
    postorderTraversal(root);
    printf("\n");
    inorderTraversal(root);

    return 0;
}