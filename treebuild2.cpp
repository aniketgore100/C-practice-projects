#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
     this ->data = d;
     this ->left = NULL;
     this ->right = NULL;
    }
};


void buildfrom(node* &root){

    queue<node*>q;
    cout<<"enter root"<<endl;
    int data;
    cin>>data;

    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            root->left = new node(leftdata);
            q.push(root->left);
        }

        cout<<"right of "<<temp->data<<endl;
        int rightdatad;
        cin>>rightdatad;
        if(rightdatad != -1){
            root->right = new node(rightdatad);
            q.push(root->right);
        }
    }
}

int main(){
    node* root = NULL;
    buildfrom(root);
}