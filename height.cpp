
#include <bits/stdc++.h>

using namespace std;

struct node{
  int data;
  struct node* left;
  struct node* right;

    node(int val){
      int data = val;
      left = NULL;
      right = NULL;
    }
};

int height(node* root){
  if(root==NULL){
    return -1;
  }
  else {
    int lh = height(root->left);
    int rh = height(root->right);
     
      if (lh > rh) 
            return(lh + 1); 
        else return(rh + 1); 
}
}

int main()
{
  struct node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(4);
  root->right->left = new node(5);
  cout<<height(root)<<endl;
  return 0;
}

