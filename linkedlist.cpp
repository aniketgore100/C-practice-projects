#include <bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;

// node(int  data){
//     this->data = data;
//     this->next = NULL;
// }

};


void insertFront(node* &head, int data) {
    node* newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}


void insertAtEnd(node* &head, int data) {
    node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
      node* temp = head;
      while(temp->next != NULL){
        temp = temp->next;
      }
      temp->next = newnode;
    }
   
}


void ShowList(node* n){
    while(n != NULL){
        cout<<n->data<<"->";
        n = n->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    node* current = NULL;
    int n, value;
    cin>>n;
    head = new node();
    cin>>value;
    head->data = value;
    head->next = NULL;

    current = head;
    for(int i = 2; i<=n; i++){
        node* newnode = new node();
        cin>>value;
        newnode->data = value;
        newnode->next = NULL;

        current->next = newnode;
        current = newnode;
    }


    ShowList(head);
    cout<<"Insert a new node at Front "<<endl;
    cin>>value;
    insertFront(head, value);
    ShowList(head);

    cout<<"Insert a new node at end "<<endl;
    cin>>value;
    insertAtEnd(head, value);
    ShowList(head);
    return 0;
}