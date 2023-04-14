#include <bits/stdc++.h>
using namespace std;
                               // O(n^2) to O(n) 
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

int diameter(Node* root, int *height){
           if(root==NULL){
               return -1;
           }

           int lh = 0, rh = 0;
           int ld = diameter(root->left, &lh);
           int rd = diameter(root->right, &rh);

           int currdia = lh + rh + 1;
           *height = max(lh, rh)+1;

           return max(currdia, max(ld, rd));

}

int main(){
    struct Node* root = new Node(1);
     root->left = new Node(2);
     root->right = new Node(3);
     root->left->left = new Node(4);
     root->left->right = new Node(5);
     root->right->left = new Node(6);
     root->right->right = new Node(7);
     int height = 0;
    cout<<diameter(root, &height)<<"\n";
     return 0;

}