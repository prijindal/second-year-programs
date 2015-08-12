#include <iostream>
using namespace std;

class Phone {
  string brand;
  int sims;
  float imei[10];
  float number[10];

  public:
  void send_message(float phone, string message) {
    static string messagesList[10];
    static int n_messages;
    int i;
    for(i = 0;i<sims;++i) {
      if (number[i] == phone) {
        messagesList[n_messages] = message;
        n_messages++;
      }
    }

    cout<<"List of messages\n";
    for(i = 0;i<n_messages;++i) {
      cout<<i+1<<". "<<messagesList[i]<<endl;
    }
    cout<<'\n';
  }

  void insert() {
    int i;
    cout<<"Enter brand name\n";
    cin>>brand;
    cout<<"Enter no. of sim card\n";
    cin>>sims;
    for(i = 0;i<sims;++i) {
      cout<<"Enter imei of "<<i+1<<" sim: ";
      cin>>imei[i];
      cout<<"Enter Phone number of "<<i+1<<" sim: ";
      cin>>number[i];
    }
  }

  void display() {
    int i;
    cout<<"Brand name: "<<brand<<endl;
    cout<<"No. of sim cards: "<<sims<<endl;
    cout<<"SIM details\n";
    for(i = 0;i<sims;++i) {
      cout<<i+1<<". Phone number: "<<number[i]<<endl;
      cout<<i+1<<". IMEI number: "<<imei[i]<<endl;
    }
  }
};

int main() {
  Phone p;
  p.insert();
  p.send_message(9981, "A small light message!");
  p.send_message(9982, "Another small little message!");
  p.display();
}
