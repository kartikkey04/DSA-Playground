#include<iostream>
using namespace std;

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
};

// inorder traversal

void inorder(TreeNode* root){
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// preorder traversal

void preorder(TreeNode* root){
    if(root == NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// postorder traversal

void postorder(TreeNode* root){
    if(root == NULL) return;

    cout<<root->data<<" ";
    postorder(root->left);
    postorder(root->right);
}

int main(){

    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);

    inorder(root);
    preorder(root);
    postorder(root);

    return 0;

}