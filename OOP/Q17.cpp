/*
Create a  class service center that maintains the details of cars in service. 
Have minimum of 4 sub classes for individual brands of cars (Swift, Swift Dezire Alto).
Populate the sub classes with your own attributes. Ensure that every class has billing function in common signature
for customer bill generation purpose. Make use of pure virtual function concept.
*/
#include <iostream>
using namespace std;

class Car {
	string license_no;
	public:
	Car() {
		license_no = "DL14AC0009";
	}
	
	string getLicense() {
		return license_no;
	}
	
	virtual void generate_bill() = 0;
};

class Swift:public Car {
	float price,maintanence_cost;
	string engine;
	int doors;
	public:
	Swift() {
		price = 300000;
		maintanence_cost = 1500;
		engine = "1200CC";
		doors = 4;
	}	
	void generate_bill() {
		cout<<"Car: Swift\n";
		cout<<"License: "<<getLicense()<<endl;
		cout<<"Engine: "<<engine<<endl;
		cout<<"Doors: "<<doors<<endl;
		cout<<"Maintanence Cost: "<<maintanence_cost<<"\n\n";
	}
};

class SwiftDezire:public Car {
	float price,maintanence_cost;
	string engine;
	int doors;
	public:
	
	SwiftDezire() {
		price = 500000;
		maintanence_cost = 2500;
		engine = "1400CC";
		doors = 4;
	}	
	
	void generate_bill() {
		cout<<"Car: SwiftDezire\n";
		cout<<"License: "<<getLicense()<<endl;
		cout<<"Engine: "<<engine<<endl;
		cout<<"Doors: "<<doors<<endl;
		cout<<"Maintanence Cost: "<<maintanence_cost<<"\n\n";
	}
};

class Alto:public Car {
	float price,maintanence_cost;
	string engine;
	int doors;
	public:
	
	Alto() {
		price = 200000;
		maintanence_cost = 1000;
		engine = "1000CC";
		doors = 4;
	}	
	
	void generate_bill() {
		cout<<"Car: Alto\n";
		cout<<"License: "<<getLicense()<<endl;
		cout<<"Engine: "<<engine<<endl;
		cout<<"Doors: "<<doors<<endl;
		cout<<"Maintanence Cost: "<<maintanence_cost<<"\n\n";
	}
};


class Nano:public Car {
	float price,maintanence_cost;
	string engine;
	int doors;
	public:
	
	Nano() {
		price = 100000;
		maintanence_cost = 500;
		engine = "800CC";
		doors = 4;
	}
	
	void generate_bill() {
		cout<<"Car: Nano\n";
		cout<<"License: "<<getLicense()<<endl;
		cout<<"Engine: "<<engine<<endl;
		cout<<"Doors: "<<doors<<endl;
		cout<<"Maintanence Cost: "<<maintanence_cost<<"\n\n";
	}
};

class service_center {
	int n;
	int nanos, swifts, dezires, altos;
	Car *serviced_cars[100];
	public:
	service_center() {
		nanos = 4;
		swifts = 2;
		dezires = 3;
		altos = 1;
		n = 0;
	}
	
	void bill() {
		int i;
		Nano N[nanos];
		Swift S[swifts];
		SwiftDezire D[dezires];
		Alto A[altos];
		for(i = 0;i<nanos;++i) {
			serviced_cars[n] = &N[i];
			n++;
		}
		for(i = 0;i<swifts;++i) {
			serviced_cars[n] = &S[i];
			n++;
		}
		for(i = 0;i<dezires;++i) {
			serviced_cars[n] = &D[i];
			n++;
		}
		for(i = 0;i<altos;++i) {
			serviced_cars[n] = &A[i];
			n++;
		}
		
		for(i = 0;i<n;++i) {
			serviced_cars[i]->generate_bill();
		}
	}
};

int main() {
	service_center C;
	C.bill();
}
