#include <iostream>
using namespace std;

class Student {
  string reg_no, name;
  int age;
  string email_id;

  bool check_duplicate(Student all[],int size, string temp_reg_no) {
    int i;
    for(i = 0;i<size;++i) {
      if(all[i].reg_no == temp_reg_no) {
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
  Student A[3];

  int i,n;
  cout<<"How many students are there?: ";
  cin>>n;

  for (i = 0; i < n; i++) {
    A[i].input(A, n);
  }

  for (i = 0; i < n; i++) {
    A[i].display();
  }
}
