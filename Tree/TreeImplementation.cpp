#include<bits/stdc++.h>
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

// iterative preorder

vector<int> iterativePreorder(TreeNode* root){
    stack<TreeNode*> st;
    vector<int> preorder;

    if(root == NULL) return preorder;
    st.push(root);

    while(!st.empty()){
        TreeNode* Node = st.top();
        st.pop();

        preorder.push_back(Node->data);

        if(Node->right != NULL)
        st.push(Node->right);

        if(Node->left != NULL)
        st.push(Node->left);
    }

    return preorder;
}

// iterative inorder

vector<int> iterativeInorder(TreeNode* root){
    stack<TreeNode*> st;
    TreeNode* node = root;
    vector<int> inorder;

    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;
        }
        else{
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
    }
    return inorder;
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
    vector<int> preorder = iterativePreorder(root);
    vector<int> inorder = iterativeInorder(root);

    // printing result return by iterative preorder.
    for(int i=0; i<preorder.size(); i++){
        cout<<preorder[i]<<" ";
    }

    // printing result return by iterative inorder.
    for(int i=0; i<inorder.size(); i++){
        cout<<inorder[i]<<" ";
    } 
    
    return 0;

}