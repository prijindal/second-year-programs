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
    string dateInFormat;
    dateinFormat = to_string(date) + "/" + to_string(month) + "/" +to_string(year);
    return dateinFormat;
  }
}

int main() {
  Student s;
  s.put_data();
  cout<<s.get_data();
}
