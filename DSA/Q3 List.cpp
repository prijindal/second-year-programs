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
      int i;
      for(i = size;i>=position;--i) {
        list[i+1] = list[i];
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

    void traverse() {
      int i;
      for(i = 0;i<size;++i) {
        cout<<i+1<<". "<<list[i]<<endl;
      }
      cout<<'\n';
    }
};

int main() {
  List l;
  l.insert(5,0);
  l.insert(10,1);
  l.insert(15,2);
  l.insert(16,1);
  l.insert(20,3);

  l.traverse();
  l.deleteAt(1);
  l.traverse();

  cout<<l.search(16)<<endl;
  cout<<l.search(10)<<endl;
}
