#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
      
      Node(int val){
          data = val;
          left = NULL;
          right = NULL;
      }
};

int levelorder(Node* root, int k){
    if(root==NULL){
      return -1;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int level=0, sum=0;
    while(!q.empty()){
     Node* node = q.front();
     q.pop();
     if(node!=NULL){
       if(level==k){
         sum += node->data;
       }
       if(node->left)
         q.push(node->left);
       if(node->right)
         q.push(node->right);   
     }
     else if(!q.empty()){
       q.push(NULL);
       level++;
     }
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    int x;
    for(int i=0; i<n; i++){
        cin>>x;
    }
      struct Node* root = new Node(x); 
     root->left = new Node(x);
    root->right = new Node(x);
    root->left->left = new Node(x);
    root->left->right = new Node(x);
    root->right->left = new Node(x);
    root->right->right = new Node(x);   
    cout<<levelorder(root, x);
}