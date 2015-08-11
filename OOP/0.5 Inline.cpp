/* In the given example fun1 and fun2 are exactly same
  Basically the conventional method is to do it like func2
  but if you want u can do it using fun1 which will behave in exactly the same manner
*/
#include <iostream>
using namespace std;

class Student {
  int data;

  public:

  Student() {
    data = 50;
  }

  inline void func1();
  void func2() {
    cout<<data;
  }
};

void Student::func1() {
  cout<<data;
}

int main() {
  Student A;
  A.func1();
  A.func2();
}
