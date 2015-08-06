#include <iostream>
using namespace std;

class Student {
  string name;
  int date, month, year;

  void put_data() {
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter date: ";
    cin>>date;
    cout<<"Enter month: ";
    cin>>month;
    cout<<"Enter year: ";
    cin>>year;
  }

  string get_data() {
    string date;
    date = "%d/%d/%d",date, month, year; // INVALID SYNTAX
    return date;
  }
}

int main() {
  Student s;
  s.put_data();
  cout<<s.get_data();
}
