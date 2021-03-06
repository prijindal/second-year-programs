#include <iostream>
using namespace std;

struct Transaction {
  string from, to;
  int amount;
};

class Account {
  int acc_no;
  int balance;
  string name;
  Transaction all[20];
  int n_transactions;

  public:

  Account() {
    n_transactions = 0;
    input();
  }

  void add_transaction(string from, string to, int amount) {
    all[n_transactions].from = from;
    all[n_transactions].to = to;
    all[n_transactions].amount = amount;
    n_transactions++;
  }

  void deposit(Account &depositer, int amount) {
    depositer.balance-=amount;
    balance+=amount;
    depositer.add_transaction(depositer.name, name, amount);
    add_transaction(depositer.name, name, amount);
  }
  void withdraw(Account &withdrawee, int amount) {
    withdrawee.balance+=amount;
    balance-=amount;
    withdrawee.add_transaction(name, withdrawee.name, amount);
    add_transaction(name, withdrawee.name, amount);
  }

  void print() {
    int i;
    cout<<"Name of Account holder: "<<name<<endl;
    cout<<"Balance in Account No. "<<acc_no<<" is "<<balance<<endl;

    for(i = 0;i<n_transactions;++i) {
      cout<<i+1<<". Transfer of "<<all[i].amount<<" from "<<all[i].from<<" to "<<all[i].to<<endl;
    }
    cout<<'\n';
  }

  void input() {
    cout<<"Enter Account Holder's name: ";
    cin>>name;
    cout<<"Enter Account no.: ";
    cin>>acc_no;
    cout<<"Enter Initial Balance: ";
    cin>>balance;
    cout<<'\n';
  }
};

int main() {
  Account A,B,C;
  A.deposit(B, 500);
  B.deposit(C, 200);
  C.withdraw(A, 200);

  A.print();
  B.print();
  C.print();
}
