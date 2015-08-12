#include <iostream>
using namespace std;

class Stack {
  struct Node {
    int data;
    struct Node *next;
  };
  Node *top = NULL;

public:

  void push(int data) {
    Node *temp;
    temp = new Node;
    temp->data = data;
    temp->next = top;
    top = temp;
  }

  int pop() {
    Node *temp;
    temp = top;
    top = temp->next;
    return temp->data;
  }

  void display() {
    Node *temp;
    temp = top;
    while(temp!=NULL) {
      cout<<temp->data<<endl;
      temp = temp->next;
    }
    cout<<'\n';
  }
};
int main() {
  Stack s;
  int t;
  s.push(5);
  s.display();
  s.push(10);
  s.display();
  t = s.pop();
  s.display();
}
