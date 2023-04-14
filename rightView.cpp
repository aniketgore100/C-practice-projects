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

int leftview(Node* root){
    if(root == NULL)
     return 0;
    queue<Node*>q;
    q.push(root);
  
    while(!q.empty()){
       Node* node = q.front();
       q.pop();
       int n = q.size();
       for(int i=0; i<n; i++){
          Node* newnode=q.front();
          if(newnode->left)  q.push(newnode->left);
          if(newnode->right) q.push(newnode->right);
       }
      
    }
    return 0;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);   //                                         1
    root->left->right = new Node(5); //                                        /   \  
    root->right->left = new Node(6);  //                                      2     3
    root->right->right = new Node(7);     //                                /  \   /  \       
    leftview(root);                    //                                  4    5  6   7
    return 0;                          //
}                                       //
                                       //
                                    //
                                    //