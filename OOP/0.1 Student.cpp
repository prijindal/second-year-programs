/* This is a simple class Student has some attibutes,
  it has a function to accept data and another one which converts that data
    Nothing Fancy :) */
#include <iostream>
#include <sstream>
using namespace std;

class Student {
  string name;
  int date, month, year;

  string num_to_string(int n) {
    stringstream ss;
    ss << n;
    return ss.str();
  }

  public:
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
    string dateInFormat;

    dateInFormat = num_to_string(date) + '/' + num_to_string(month) + '/' + num_to_string(year);

    return dateInFormat;
  }
};

int main() {
  Student s;
  s.put_data();
  cout<<s.get_data();
}
