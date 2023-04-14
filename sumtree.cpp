#include <bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   struct Node* left;
   struct Node* right;
   
          Node(int val){
            data = val;
            left = NULL;
            right = NULL;
          }

};

void inorder(struct Node* root){
  if(root==NULL)
   return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}


 class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node* root){
        if(!root) return 0;
        int a = solve(root->left);
        int b = solve(root->right);
        int x = root->data;
        root->data = a+b;
        return a+b+x;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
        
    }
};


int main(){
    struct Node* root = new Node(1);
     root->left = new Node(2);
     root->right = new Node(3);
     root->left->left = new Node(4);
     root->left->right = new Node(5);
     root->right->left = new Node(6);
     root->right->right = new Node(7);
     //preorder(root);
    // inorder(root);
    Solution ob;
    ob.toSumTree(root);
    inorder(root);
    cout<<endl;
     return 0;

}