#include <iostream>
using namespace std;

class Date {
	int dd,mm,yy;
	
	public:
		Date() {
			dd = 31;
			mm = 1;
			yy = 2014;
		}
		
		void display() {
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		
		Date operator++(int ) {
			switch(mm) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if(dd==31) {
						dd = 1;
						mm=mm+1;
					}
					else{
						dd++;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if(dd==30) {
						dd = 1;
						mm=mm+1;
					}
					else{
						dd++;
					}
					break;
				case 2:
					if(dd==28){
						dd=1;
						mm=mm+1;
					}
					else{
						dd++;
					}
					break;
				default:
					cout<<"Error";
					
					
			}
			if(mm==13) {
				mm=1;
				yy=yy+1;
			}
		}	
};

int main() {
	Date d;
	d.display();
	d++;
	d.display();
	
}
