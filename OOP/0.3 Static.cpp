/*
  First let me explain what is static and non static data members
  Let's say we have a class Template.
  In this Template class there will be a lot of data members
  and every time we create a new object of that class
  we will get a new instance of those data members.

  But what if we want to repeat some data in all the objects,
  simple we use static data members
*/
#include <iostream>
using namespace std;

class Template {
  int data; // This will be unique to an object
  static int count; // This will be common to all the objects of the class

  // You can do the same using functions
public:
  Template() {
    count++;
  }

  int setData(int d) {
    data = d;
  }

  static int getCount() { // Can only access static data members
    return count;
  }
};

int Template::count = 0;

int main() {
  Template A;
  cout<<A.getCount()<<endl;
  Template B;
  cout<<B.getCount();
}
