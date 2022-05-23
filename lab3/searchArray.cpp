#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
cout << "Enter the size of the array: ";
int n;
cin >> n;
if (n > 0){
	int arr[n];

	// this loop recieves and stores data

	cout << "Enter the numbers in the array, separated by a space, and press enter: ";

	for (int i =0; i < n; i++){
			scanf( "%d" ,&arr[i]);
		}
	int v;
	int check = 0;
	cout << "Enter a number to search for in the array: ";
	cin >> v;
	for (int i =0; i < n; i++){
		if(arr[i] == v){
			check++;
			cout << "Found value "<< v <<" at index "<< i<< ", which took "<< (i+1)<< " checks."<<endl;
			if (i==0){
				cout<<"We ran into the best case scenario!"<<endl;
			}
			break;
		}
	}
	if(check==0){
		cout<< "The value "<< v <<" was not found in the array!"<<endl;
		cout<< "We ran into the worst case scenario"<<endl;
	}

}else {
	cout <<"ERROR: You entered an incorrect value for the array size!"<<endl;

}
return 0;
}
