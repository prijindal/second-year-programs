#include <iostream>
using namespace std;

class List {
  int list[20];
  int size;

  public:
    List() {
      size = 0;
    }

    void insert(int data, int position) {
      for(i = 0;i<size;++i) {
        list[i] = list[i-1];
      }
      list[position] = data;
      size++;
    }

    void deleteAt(int position) {
      int i;
      for(i = position+1;i<size;++i) {
        list[i-1] = list[i];
      }
      size--;
    }

    int search(int data) {
      int i;
      for(i=0;i<size;++i) {
        if(list[i]==data) {
          return i+1;
        }
      }
      return -1;
    }

    int traverse() {
      int i;
      for(i = 0;i<size;++i) {
        int temp = list[i];
        list[i] = list[size-i-1];
        list[size-l-i] = temp;
      }
    }

    void display() {
      int i;
      for(i = 0;i<size;++i) {
        cout<<i+1<<". "<<list[i]<<endl;
      }
    }
};

int main() {
  List l;
  l.insert(5,0);
  l.display();
  l.insert(10,1);
  l.display();
  l.deleteAt(1);
  l.display();
}
