/*
  We can pass an object of a class like any other data,
  Let me repeat Object not the class*/
#include <iostream>
using namespace std;

class Student {
  public: // Here I am making everything public to make it easier, but it is a bad idea to do so

  int reg_no;
  int class_number;
  int roll_no;
};

void display_Student(Student S) {
  cout<<S.reg_no;
  cout<<S.class_number;
  cout<<S.roll_no;
}

Student create_student() {
  Student temp;
  cout<<"Enter student details: ";
  cin>>temp.reg_no;
  cin>>temp.class_number;
  cin>>temp.roll_no;
  return temp;
}

int main() {
  Student Pri = create_student();
  display_Student(Pri);
}
