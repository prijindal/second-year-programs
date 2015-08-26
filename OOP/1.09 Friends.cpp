// username, password, age, mailid,  phone number, accepted friends lis

// a friend function inside the class.
// Create 3 users such that the first user is friend with 2 and 3 (update friend list of user 1  with user names of 2 and 3
// If the user1 logs in, he should see the personal  information of 2 and 3,
// 2  can’t see the personal information of 3

#include <iostream>
using namespace std;

class User;
class User {
  string username;
  string password;
  int age;
  int mailid;
  float phone;
  string friends_list[10];
  int n_friends;

public:
  User() {
    n_friends = 0;
    cout<<"Enter Username: ";
    cin>>username;
  }

  void display() {
    cout<<"Username: "<<username;
  }

  void add_friend(User &new_friend);
  void show_information();
};


void User::add_friend(User &new_friend) {
  friends_list[n_friends] = new_friend.username;
  new_friend.friends_list[new_friend.n_friends] = username;
  n_friends++;
  new_friend.n_friends++;
}

void User::show_information() {
  int i;
  cout<<"Your Username: "<<username<<endl;
  cout<<"Your Friends are:\n";
  for (i = 0; i < n_friends; ++i)
  {
    cout<<friends_list[i]<<endl;
  }
  cout<<endl;
}

int main() {
  User A,B,C;
  A.add_friend(B);
  A.add_friend(C);
  cout<<"Information of 1:\n";
  A.show_information();
  
  cout<<"Information of 2:\n";
  B.show_information();
  
  cout<<"Information of 3:\n";
  C.show_information();
}