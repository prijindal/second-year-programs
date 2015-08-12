#include <iostream>
using namespace std;

class Product {
	int prod_id;
	string name;
	float price;
	
	public:
	
	void input() {
		cout<<"Name: ";
		cin>>name;
		cout<<"Prod ID: ";
		cin>>prod_id;
		cout<<"Price: ";
		cin>>price;
	}
	
	void display() {
		cout<<"Name: "<<name<<endl;
		cout<<"Prod ID: "<<prod_id<<endl;
		cout<<"Price: "<<price<<endl;
	}
	
	int operator+(const Product& add) {
		return this->price + add.price;
	}
	int operator*(const int& mul) {
		return mul*this->price;
	}
};

class Belt:public Product {
	int length;
	string color;
	int width;
	
	public:
		void input() {
			Product::input();
			cout<<"Length: ";
			cin>>length;
			cout<<"Color: ";
			cin>>color;
			cout<<"Width: ";
			cin>>width;
		}
		
		void display() {
			Product::display();
			cout<<"Length: "<<length<<endl;
			cout<<"Color: "<<color<<endl;
			cout<<"Width: "<<width<<endl;
			cout<<'\n';
		}
};

class Shoes: public Product {
	int size;
	bool formal;
	bool laced;
	
	public:
		void input() {
			Product::input();
			cout<<"Size: ";
			cin>>size;
			cout<<"Formal: ";
			cin>>formal;
			cout<<"Laced: ";
			cin>>laced;
		}
		
		void display() {
			Product::display();
			cout<<"Size: "<<size<<endl;
			cout<<"Formal: "<<formal<<endl;
			cout<<"Laced: "<<laced<<endl;
			cout<<'\n';
		}
};

class Caps: public Product {
	float diameter;
	bool waterproof;
	string color;
	
	public:
		void input() {
			Product::input();
			cout<<"Diameter: ";
			cin>>diameter;
			cout<<"Waterproof: ";
			cin>>waterproof;
			cout<<"Color: ";
			cin>>color;
		}
		
		void display() {
			Product::display();
			cout<<"Diameter: "<<diameter<<endl;
			cout<<"WaterProof: "<<waterproof<<endl;
			cout<<"Color: "<<color<<endl;
			cout<<'\n';
		}
};

class User {
	Shoes A, B;
	Belt C, D;
	Caps E, F;
	int nA, nB, nC, nD, nE, nF;
	int total;
	
	public:
		
		User() {
			nShoes = nBelt = nCaps = total = 0;
			accept();
		}
		
		void accept() {
			int ch = 0;
			while(ch!=3) {
				cout<<"These are you current Details: \n";
				show();
				cout<<"Menu\n";
				cout<<"1. Accept\n";
				cout<<"2. Display\n";
				cout<<"3. Exit\n";
				cin>>ch;
				switch(ch) {
					case 1:
						newProduct();
						break;
					case 2:
						show();
						break;
					case 3:
						exit();
					default:
						cout<<"Invalid Input!!";
				}
			}
		}
		
		void newProduct() {
			int choice, quantity;
			cout<<"\nWhat do you want to buy?: ";
			cout<<"1. Shoes\n";
			cout<<"2. Belt\n";
			cout<<"3. Caps\n";
			cin>>choice;
			switch(choice) {
				case 1:
					S[nShoes].input();
					nShoes++;
					break;
				case 2:
					B[nBelt].input();
					nBelt++;
					break;
				case 3:
					C[nCaps].input();
					nCaps++;
					break;
				default:
					cout<<"Invalid choice!!\n";
			}
			cout<<"Enter No. of Items: ";
			cin>>quantity;
		}
		
		void show() {
			cout<<"Total Balance: "<<balance<<'\n';
			cout<<"No. of Shoes: "<<nShoes<<'\n';
			cout<<"No. of Belts: "<<nBelt<<'\n';
			cout<<"No. of Caps: "<<nCaps>>'\n';
		}
};

int main() {
	Shoes A;
	Belt B;
	A.input();
	B.input();
	cout<<A*5;
	cout<<A+B;
}
