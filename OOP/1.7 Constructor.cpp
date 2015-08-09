#include <iostream>
using namespace std;

class Computer {
  bool assembled;// True of assembled false if branded
  float ram;// in Bytes
  float HDD;
  float speed;
  float price;

  public:
  Computer() {
    cout<<"Object is being created\n";
  }

  Computer(Computer &copied){
    cout<<"Copying Object...\n";
    assembled = copied.assembled;
    ram = copied.ram;
    HDD = copied.HDD;
    speed = copied.speed;
    price = copied.price;
  }

  ~Computer() {
    cout<<"Object is being destroyed\n";
  }

  void input() {
    assembled = true;
    ram = 1024;
    HDD = 512000;
    speed = 80000;
    price = 100;
  }

  void display() {
    cout<<"Assembled: "<<assembled<<endl;
    cout<<"RAM: "<<ram<<endl;
    cout<<"HDD: "<<HDD<<endl;
    cout<<"Speed: "<<speed<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"\n";
  }
};
int main() {
  Computer A;
  A.input();
  Computer B = A;
  A.display();
  B.display();
}
