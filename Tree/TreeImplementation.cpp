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

int main(){

    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);

    inorder(root);

}