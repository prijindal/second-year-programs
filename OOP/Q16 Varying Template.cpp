/*
Write a cpp program to handle a generic queue which can handle different types of items like patient id
has input or Price with decimals have input or Employee name has input to the queue.
make use of class template
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
class Queue {
	T list[100];
	int size;
	public:
		Queue() {
			size = 0;
		}
		
		bool isFull() {
			return size==100;
		}
		bool isEmpty() {
			return size==0;
		}
		
		void enqueue(T newData) {
			if(!isFull()){
				list[size] = newData;
				size++;
			}
		}
		
		T dequeue() {
			int i;
			T result;
			if(isEmpty()) {
				return 0;
			}
			else {
				result = list[0];
				for(i = 0;i<size-1;++i){
					list[i] = list[i+1];
				}
				size--;
				return result;
			}
		}
		
		void display() {
			int i;
			for(i=0 ;i<size;++i) {
				cout<<i+1<<": "<<list[i]<<endl;
			}
			cout<<'\n';
		}
		
		void menu() {
			int ch;
			T D;
			while(true) {
				cout<<"Choose an operation\n";
				cout<<"1. Enqueue\n";
				cout<<"2. Dequeue\n";
				cout<<"3. Display\n";
				cout<<"4. Exit\n";
				cin>>ch;
				switch(ch) {
					case 1:
						cout<<"Enter new data\n";
						cin>>D;
						enqueue(D);
						break;
					case 2:
						cout<<"Element Dequeud: "<<dequeue()<<endl;
						break;
					case 3:
						display();
						break;
					case 4:
						exit(1);
					default:
						cout<<"Invalid Operation\n";
				}
			}
		}
};

void showMenu(int ch) {
	switch(ch) {
		case 1:
		{
			Queue<int> Q;
			Q.menu();
			break;
		}
		case 2:
		{
			Queue<float> Q;
			Q.menu();
			break;
		}
		case 3:
		{
			Queue<string> Q;
			Q.menu();
			break;
		}
		case 4:
			exit(1);
		default:
			cout<<"Invalid option";
	}
}

int main() {
	int ch;
	cout<<"Choose one data\n";
	cout<<"1. Patient ID\n";
	cout<<"2. Price\n";
	cout<<"3. Employee name\n";
	cout<<"4. None, Please take me out!!\n";
	cin>>ch;
	showMenu(ch);
	
}
