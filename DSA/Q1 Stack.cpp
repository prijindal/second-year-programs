#include <iostream>
using namespace std;

class Stack {
  int list[20];
  int size;

  public:
    Stack() {
      size = 0;
    }

    bool isStackEmpty() {
      if(size==0) {
        return true;
      }
      else {
        return false;
      }
    }

    bool isStackFull() {
      if(size==20) {
        return true;
      }
      else {
        return false;
      }
    }

    int pop() {
      if(!isStackEmpty()) {
        size--;
        return list[size-1];
      }
      else {
        cerr<<"Nothing to Pop!!"<<endl;
        return -1;
      }
    }
    void push(int data) {
      if(!isStackFull()) {
        list[size] = data;
        size++;
      }
      else {
        cerr<<"Stack is Full!"<<endl;
      }
    }

    void display() {
      int i;
      if(!isStackEmpty()){
        for(i = 0;i<size;++i) {
          cout<<i+1<<". "<<list[i]<<endl;
        }
      }
      else {
        cerr<<"Stack is Empty!! Nothing to show"<<endl;
      }
    }
};

int main() {
  Stack s;
  int temp;

  s.push(5);
  s.push(10);
  s.display();

  temp = s.pop();

  s.display();
}
