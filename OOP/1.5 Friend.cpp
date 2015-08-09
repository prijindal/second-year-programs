// INVALID LOGIC
#include <iostream>
using namespace std;

class Student {
  string name;
  string course;
  string type_time;
  string address;

  public:
  void input() {
    name = "Priyanshu";
    course = "abc";
    type_time = "regular";
    address = "111s1,1s1s";
  }
  friend check_repeat(Student S[], Student cur);
};

class Employee {
  int id;
  string name;
  int age;
  string address;

  public:
  void input() {
    id = 123;
    name = "jindal";
    age = 19;
    address = "11x1x1q";
  }
  friend check_repeat(Student S[], Student cur);
};

check_repeat(Student S[], Student cur) {
  cout<<cur.name;
}
int main() {

}
