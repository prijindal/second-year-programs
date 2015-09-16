/* Create a c++ program that Create a base class person and derived classes general
public, government official and VVIP. Maintain a static array of objects using inside the
persons class. Access the shared memory from all the classes to store and retrieve data.
Reserve zones in that array such that they are to be used by appropriate category of
people. Ensure that the space is available in each zone before you create a dynamic object
of each type and store it inside the shared array.*/
#include <iostream>
using namespace std;

struct zones {
	string name;
	string zone;
};

class Person {
	string name;
	int age;
	static struct zones details[100];
	static int count;
	public:
	void accept (string zone) {
		if (count == 100) {
			cout<<"Memory full!!";
		}
		else {
			name = "Priyanshu";
			age = 19;
			details[count].name = name;
			details[count].zone = zone;
			count++;
		}
	}
	void display() {
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	}
};
int Person::count=0;
zones Person::details[];

class Citizen:public Person {
	int adhar_id;
	public:
		void accept(){
			Person::accept("citizen")
			adhar_id = 100;
		}
		void display() {
			Person::display();
			cout<<"Adhar card: "<<adhar_id<<endl;
		}
};

class Official:public Person {
	int gov_id;
	public:
		void accept(){
			Person::accept("citizen")
			gov_id = 121;
		}
		void display() {
			Person::display();
			cout<<"Government card: "<<gov_id<<endl;
		}
};

class Vvip:public Person {
	int id_card;
	public:
		void accept(){
			Person::accept("citizen")
			id_card = 200;
		}
		void display() {
			Person::display();
			cout<<"ID card: "<<id_card<<endl;
		}
};
int showmenu() {
	int choice;
	print("1. Enter new Citizen\n");
	print("2. Enter new Official\n");
	print("3. Enter new Vvip\n");
	print("4. Display all data\n");
	print("5. Exit\n");
	cin>>choice;
	return choice;
}
int main() {
	Citizen C[100];
	Official O[100];
	Vvip V[100];
	int 
	int ch = 0;
	while(1) {
		switch(showmenu()) {
			case 0:
				C.accept()
		}
	}
	Vvip V[101];
	V[0].display();
}
