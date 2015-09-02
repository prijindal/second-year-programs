#include <iostream>
using namespace std;

class Stack {
  struct Node {
    char data;
    struct Node *next;
  };
  Node *top = NULL;

public:
	
  bool isStackEmpty() {
  	if(top==NULL) {
  		return true;
  	}
  	else {
  		return false;
  	}
  }

  void push(char data) {
    Node *temp;
    temp = new Node;
    temp->data = data;
    temp->next = top;
    top = temp;
  }

  char pop() {
    Node *temp;
    temp = top;
    top = temp->next;
    return temp->data;
  }
  
  char topData() {
  	if(top==NULL) {
  		return '1';
  	}
  	return top->data;
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
	Stack S;
	int i;
	string input, output= "";
	cout<<"Enter a String: ";
	cin>>input;
	for(i = 0;input[i]!='\0';++i) {
		if(input[i].isAlpha()) {
			output.append(input[i]);
		}
		else {
			char t = S.topData();
			if(t == '*') {
				
			}
			else if(t == '/') {
				
			}
			else if(t == '+') {
				
			}
			else if(t == '-') {
				
			}
		}
	}
}
