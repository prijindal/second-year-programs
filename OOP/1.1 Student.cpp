#include <iostream>
using namespace std;

class Student {
  string reg_no, name;
  int age;
  string email_id;

  void check_duplicate(Student all[],int size, string temp_reg_no) {
    int i;
    for(i = 0;i<size;++i) {
      if(all.reg_no == temp_reg_no) {
        return true;
      }
    }
    return false;
  }

  public:

  void input(Student all[], int size) {
    string temp;
    cout<<"Enter Reg. No. : ";
    cin>>temp;
    if(check_duplicate(all, size, temp)) {
      cout<<"This registration no. is already present";
      return;
    }
    else {
      reg_no = temp;
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter Age: ";
      cin>>age;
      cout<<"Enter Email ID: ";
      cin>>email_id;
    }
  }

  void display() {
    cout<<"Name: "<<name<<endl;
    cout<<"Reg. No.: "<<reg_no<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Email ID: "<<email_id<<endl;
  }
};

int main() {
  Student A,B,C;

  A.input();
  B.input();
  C.input();

  A.display();
  B.display();
  C.display();
}
