/* In the given example fun1 and fun2 are exactly same
  Basically the conventional method is to do it like func2
  but if you want u can do it using fun1 which will behave in exactly the same manner
*/

class Student {
  int data;

  public:
  inline void func1();
  void func2() {
    cout<<data;
  }
}

void Student::func1() {
  cout<<data;
}
