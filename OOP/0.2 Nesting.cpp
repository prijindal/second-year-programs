/*Write a suitable example, illustrate nesting of member functions,
private member functions and array of objects in C++ programming*/
#include <iostream>
using namespace std;

class Employee {
  int ID;
  string name;

  void display();

  public:
  void input();
}

void Employee::input() {
  cout<<"Enter name: ";
  cin>>name;
  cout<<"Enter Employee ID: ";
  cin>>ID;

  display();
}

void Employee::display() {
  cout<<"Name : "<<name<<endl;
  cout<<"ID: "<<ID<<endl;
}

int main() {
  Employee E[10];
  int i,n;
  cout<<"How many Employees are there?: ";
  cin>>n;

  for (i = 0; i < n; i++) {
    E[i].input();
  }
}
