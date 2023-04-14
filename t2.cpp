#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod (100000007)
#define ll long long 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second 
#define loop(i,n) for(int i=0; i<n; i++)
#define loop1(i,n) for(int i=1; i<=n; i++)


class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        int data=d;
        node* left = NULL;
        node* right = NULL;
        
    }
    

};
node* preorder(node* root){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    root->left=(preorder(root->left));
    root->right=(preorder(root->right));

return root;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     
     node* root = NULL;
     preorder(root);
      
   
   return 0;
}








