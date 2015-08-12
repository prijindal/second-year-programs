#include <iostream>
using namespace std;

class ID_card  {
  public:
  string name, reg_no;
  bool hostel;
};

void input(ID_card &I) {
  I.name = "Priyanshu";
  I.reg_no = "14BCE0607";
  I.hostel = true;
}

void display(ID_card &I) {
  cout<<"Name: "<<I.name<<endl;
  cout<<"Reg No.: "<<I.reg_no<<endl;
  cout<<"Hosteller: "<<I.hostel<<endl;
  cout<<"\n";
}

void update(ID_card &I, int ch, string data) {
  switch (ch) {
    case 1:
          I.name = data;
          break;
    case 2:
          I.reg_no = data;
          break;
    case 3:
          if(data == "true") {
            I.hostel = true;
          }
          else if(data == "false") {
            I.hostel = false;
          }
          else {
            cerr<<"Invalid Input!!"<<endl;
          }
          break;
    default:
          cerr<<"Invalid option!"<<endl;
  }
}

void del(ID_card &I) {
  delete &I;
}


int main() {
  ID_card A;
  input(A);
  display(A);
  update(A, 1, "Pri");
  //display(A);
  update(A, 2, "607");
  //display(A);
  update(A, 3, "false");
  display(A);
  del(A);
}
