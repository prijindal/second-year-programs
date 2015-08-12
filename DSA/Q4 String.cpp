#include <iostream>
using namespace std;

class String {
  char list[10];
  int size;

  public:
    String() {
      cout<<"Enter no. of characters: ";
      cin>>size;
      cout<<"Enter a string: ";
      cin>>list;
    }

  int getStringLength() {
    return size;
  }

  void insertCharacterInString(char data, int position) {
    int i;
    for(i = size;i>=position;--i) {
      list[i+1] = list[i];
    }
    list[position] = data;
    size++;
  }

  void stringReverse() {
    int i;
    for(i = 0;i<size/2;++i) {
      int temp = list[i];
      list[i] = list[size-i-1];
      list[size-i-1] = temp;
    }
  }

  int searchPartOfString(String A) {
    int i,j,l = A.getStringLength();
    for (i = 0; i < size-l+1; i++) {
      bool found = true;
      for (j = 0; j < l; j++) {
        if (A.list[j] != list[i+j]) {
          found = false;
        }
      }
      if (found) {
        return i;
      }
    }
    return -1;
  }

  void deletePartOfString(String A) {
    int pos = searchPartOfString(A);
    int i, l = A.getStringLength();
    int n = getStringLength() - l;
    if (pos >=0) {
      cout<<"Deleting...\n";
      for (i = pos; i < n; i++) {
        list[i] = list[i+l];
      }
      size-=l;
    }
    else {
      cout<<"Not Found!";
    }
  }

  void display() {
    int i;
    for (i = 0; i < size; i++) {
      cout<<list[i];
    }
    cout<<'\n';
  }
};

int main() {
  String S, A;
  S.display();
  S.insertCharacterInString('P',1);
  S.stringReverse();
  S.display();
  A.stringReverse();
  S.deletePartOfString(A);
  S.display();
}
