#include <iostream>
using namespace std;

class Address {
  int door_no;
  string street_name;
  string city,state;

  public:
  void input() {
    cout<<"Enter door no.: ";
    cin>>door_no;
    cout<<"Enter Street Name: ";
    cin>>street_name;
    cout<<"Enter City: ";
    cin>>city;
    cout<<"Enter State: ";
    cin>>state;
  }

  void display() {
    cout<<"Door no: "<<door_no<<endl;
    cout<<"Street name: "<<street_name<<endl;
    cout<<"City: "<<city<<endl;
    cout<<"State: "<<state<<endl;
  }
};

class Student {
  string name, course;
  Address addresses[10];
  int no_addr;

  public:
  void input() {
    int i=0;
    char ch;
    cout<<"Enter Your name: ";
    cin>>name;
    cout<<"Enter your Course Type: ";
    cin>>course;
    cout<<"Do you want to enter an address?(y/n)?\n";
    cin>>ch;
    while((ch=='y')||(ch=='Y')) {
      addresses[i].input();
      cout<<"Do you want to enter another address?(y/n)?\n";
      cin>>ch;
      i++;
    }
    no_addr=i+1;
  }

  void display() {
    int i;
    cout<<"Name: "<<name<<endl;
    cout<<"Course: "<<course<<endl;
    cout<<"You have "<<no_addr<<" addresses"<<endl;
    for(i=0;i<no_addr;++i) {
      cout<<i+1<<". \n";
      addresses[i].display();
    }
  }
};

class Employee {
  int id_no;
  string name;
  Address addresses[10];
  int no_addr;

  public:
  void input() {
    int i=0;
    char ch;
    cout<<"Enter Your name: ";
    cin>>name;
    cout<<"Enter your ID No.: ";
    cin>>id_no;
    cout<<"Do you want to enter an address?(y/n)?\n";
    cin>>ch;
    while((ch=='y')||(ch=='Y')) {
      addresses[i].input();
      cout<<"Do you want to enter another address?(y/n)?\n";
      cin>>ch;
      i++;
    }
    no_addr=i;
  }

  void display() {
    int i;
    cout<<"Name: "<<name<<endl;
    cout<<"ID no.: "<<id_no<<endl;
    cout<<"You have "<<no_addr<<" addresses"<<endl;
    for(i=0;i<no_addr;++i) {
      cout<<i+1<<". \n";
      addresses[i].display();
    }
  }
};

int main() {
  Student S;
  Employee E;
  S.input();
  E.input();

  S.display();
  E.display();
}
