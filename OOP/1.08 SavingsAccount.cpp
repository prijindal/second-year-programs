// name,  phone number, accno, balanc user’s personal details can be modified directly
// deposit, withdrawal, statement print, and pin change operations by checking for  minimum balance and other conditions
// Create a new account for the same user by copying the basic details of the user using a copy constructor
#include <iostream>
using namespace std;

class Account {
  int accno;
  float balance;
  int pin;
  static int count;

public:
  string name;
  float phone;

  Account() {
    name = "Priyanshu";
    phone = 99437;
    balance = 1000;
    count++;
    accno = count;
    balance = 0;
    pin = 1111;
    cout<<"Your new pin is: "<<pin<<'\n';
  }

  Account(Account &A) {
    name = A.name;
    phone = A.phone;
    balance = A.balance;
    count++;
    accno = count;
    balance = 0;
    pin = 1111;
    cout<<"Your new pin is: "<<pin<<'\n';
  }

  void deposit(int amount) {
    balance+=amount;
  }
  void withdraw(int amount, int pass) {
    if(balance>amount) {
      if(pass == pin) {
        balance-=amount;
      }
      else {
        // Wrong Pin
      }
    }
    else {
      // Insufficent Balance
    }
  }
  void print() {
    cout<<"Name: "<<name<<'\n';
    cout<<"Balance: "<<balance<<'\n';
    cout<<"Acc No.: "<<accno<<'\n';
    cout<<"Phone No.: "<<phone<<'\n';
    cout<<'\n';
  }
  void pin_change(int old_pin, int new_pin) {
    if(old_pin == pin) {
      pin = new_pin;
    }
    else {
      // Wrong Pin
    }
  }
};
int Account::count = 0;

int main() {
  Account A;
  Account B = A;
  A.deposit(1000);
  A.pin_change(1111,4456);
  B.deposit(200);
  A.pin_change(1111,9980);
  A.withdraw(200, 4456);
  A.print();
  B.print();
}
