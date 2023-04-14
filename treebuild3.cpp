#include <bits/stdc++.h>
using namespace std;

class node {
    public:
     int data;
     node* left;
     node* right;

     node(int d){
        d = data;
        this->left = NULL;
        this->right = NULL;                        
     }
};

//      1
//     / \
//    3   5

node* buildtree(node* root){
     cout<<"enter data"<<endl;
     int data;
     cin>>data;
     root = new node(data);

     if(data == -1){
        return NULL;
     }
    cout<<"left of "<<endl;
    root->left = buildtree(root->left);
    cout<<"right of "<<endl;
    root->right = buildtree(root->right);
    return root;
}



int main(){
    node* root = NULL;
    buildtree(root);
}


