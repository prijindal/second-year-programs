#include <iostream>
using namespace std;

class Queue {
  int list[20];
  int size;

  public:

    Queue() {
      size = 0;
    }

    int getQueueSize() {
      return size;
    }

    bool isQueueFull() {
      if(size == 20) {
        return true;
      }
      else {
        return false;
      }
    }

    bool isQueueEmpty() {
      if(size==0) {
        return true;
      }
      else {
        return false;
      }
    }

    void enqueue(int data) {
      if(!isQueueFull()) {
        list[size] = data;
        size++;
      }
      else {
        cerr<<"Queue is Full";
      }
    }

    int dequeue() {
      int i, temp;
      if(!isQueueEmpty()) {
        temp = list[0];
        for(i = 0;i<size;++i) {
          list[i] = list[i+1];
        }
        size -- ;
        return temp;
      }
      else {
        cerr<<"Nothing to Dequeue, Queue is empty\n";
        return -1;
      }
    }

    void display() {
      int i;
      if(!isQueueEmpty()) {
        for(i = 0;i<size;++i) {
          cout<<i+1<<". "<<list[i]<<endl;
        }
      }
      else {
        cerr<<"Queue is Empty\n";
      }
    }
};

int main() {
  Queue q;
  int temp;

  q.display();
  q.enqueue(15);
  q.enqueue(20);
  q.display();
  temp = q.dequeue();
  q.display();

  temp = q.dequeue();
  q.display();
}
