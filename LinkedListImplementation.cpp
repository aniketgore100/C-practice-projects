#include <bits/stdc++.h>
using namespace std;

class node {
public:
  int data;
  node *next;
};

void printList(node *n) {
  while (n != NULL) {
    cout << n->data << " ";
    n = n->next;
  }
}

int main() {
  node *head = NULL;
  node *current = NULL;
  int n, value;
  cin >> n;
  head = new node();

  cin >> value;

  head->data = value;
  head->next = NULL;

  current = head;
  for (int i = 2; i <= n; i++) {
    node *newnode = new node();
    cin >> value;
    newnode->data = value;
    newnode->next = NULL;

    current->next = newnode;
    current = newnode;
  }
  printList(head);
  return 0;
}
