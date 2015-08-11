// INVALID LOGIC
#include <iostream>
using namespace std;

class Employee;

class Student {
  string name;
  string course;
  string type_time;
  string address;
  static int count;

  public:

  Student() {
    count++;
  }

  void input() {
    name = "Priyanshu";
    course = "abc";
    type_time = "regular";
    address = "111s1,1s1s";
  }

  friend bool check_student(Employee E[], Student S[], Student t);
};

class Employee {
  int id;
  string name;
  int age;
  string address;
  static int count;

  public:

  Employee() {
    count++;
  }

  void input() {
    id = 123;
    name = "jindal";
    age = 19;
    address = "11x1x1q";
  }

  friend bool check_student(Employee E[], Student S[], Student t);
};

int Employee::count = 0;
int Student::count = 0;

bool check_student(Employee E[], Student S[], Student t) {
  int i;
  for (i = 0; i < E[0].count; i++) {
    if ((E[i].name == t.name) && (E[i].address == t.name) && (t.type_time == "regular")) {
      cout<<"An Employee present!\n";
      return false;
    }
  }

  for (i = 0; i < S[0].count; i++) {
    if ((S[i].name == t.name) && (S[i].address == t.name)) {
      cout<<"A Student already present!\n";
      return false;
    }
  }
  return true;
}

int main() {
  Employee emp[10];
  Student stu[10];
  Student t;
  if(check_student(emp, stu, t)) {
    cout<<"Succesfully Saved :)";
  }
  else {
    cout<<"Not succesfull";
  }
}
