#include <bits/stdc++.h>
using namespace std;
                               // O(n^2) 
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

int height(Node* root){
    if(root == NULL)
      return 0;
    
    return max(height(root->left), height(root->right)) + 1;
}



int diameter(Node* root){
    if(root == NULL)
      return 0;
   
    int lh = height(root->left);
    int lr = height(root->right);
    int curr = lh + lr + 1;

    int ld = diameter(root->left);
    int rd = diameter(root->right);
    return max(curr, max(ld,rd));
   
}



int main(){
    struct Node* root = new Node(1);
     root->left = new Node(2);
     root->right = new Node(3);
     root->left->left = new Node(4);
     root->left->right = new Node(5);
     root->right->left = new Node(6);
     root->right->right = new Node(7);
     root->left->left->left = new Node(8);
     root->left->left->left->left = new Node(9);
     root->left->left->left->left->left = new Node(10);
     root->left->left->left->left->left->left = new Node(11);
     //cout<<height(root)<<"\n";
    cout<<height(root)<<endl;
    cout<<diameter(root)<<"\n";
     return 0;

}