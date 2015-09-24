#include <iostream>
using namespace std;

void display(int arr[], int size);

void bubbleSort(int arr[], int size) {
	int i,j;
	for(i = 0;i<size-1;++i) {
		for(j = i;j<size;++j) {
			if(arr[i] > arr[j]) {
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	
};

void insertionSort(int arr[], int size) {
	int i;
	for(i = 0;i<size;++i) {
		int j = i;
		int temp = arr[j];
		while(j>0 && temp<arr[j-1]) {
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = temp;
	}
};

void selectionSort(int arr[], int size) {
	int i;
	for(i = 0;i<size-1;++i) {
		int min = i;
		int j;
		for(j = i+1;j<size;++j) {
			if(arr[min]>arr[j]) {
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}


void display(int arr[], int size) {
	int i;
	for(i = 0;i< size;++i) {
		cout<<i+1<<": "<<arr[i]<<endl;
	}
}

int main() {
	int 
	A[] = {5, 2,1,9};
	display(A, 4);
	selectionSort(A, 4);
	display(A, 4);	
}
