#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void sortArr(int arr[],int order,int n){

	if (order == 0){
		int Max;
	        int iMax;

		for (int i = 0; i< n; i++){					//this loop sorts the array in ascending order with 
			Max = arr[0];							// selection sort
			iMax = 0;
			for(int j = 0; j<(n-i); j++){
				if (Max< arr[j]){
					Max=arr[j];
					iMax=j;
				}
			}
			int temp;
			temp = arr[(n-1)-i];
			arr[(n-1)-i]=arr[iMax];
			arr[iMax]= temp;
		}

	}
	if (order == 1){

		int Min;
		int iMin;

        	for (int i = 0; i< n; i++){				// this loop sorts the array in descending order with
                	Min = arr[0];					// selection sort
                	iMin = 0;
                	for(int j = 0; j<(n-i); j++){
                        	if (Min > arr[j]){
                                	Min=arr[j];
                                	iMin=j;
                       		 }
               		 }
               		int temp;
                	temp = arr[(n-1)-i];
                	arr[(n-1)-i]=arr[iMin];
                	arr[iMin]= temp;
        	}

	}
}


int main(){
cout << "Enter the size of the array: ";
int n;
cin >> n;
	if (n > 0){
        	int arr[n];
		int order;
       		 // this loop recieves and stores data

		cout << "Enter the numbers in the array, separated by a space, and press enter: ";

		for (int i =0; i < n; i++){
			scanf( "%d" ,&arr[i]);
		}

		cout << "Sort in asecending(0) or descending(1) order: ";
		cin>> order;
		if (order == 0 || order == 1){
			sortArr(arr,order,n);
		}else{
			cout<<"invalid order" <<endl;
			exit(1);
		}
		string name;
		if (order == 0 ){
		name="ascending";					// this assigns a name to the order
		}if (order == 1 ){
                name="descending";
		}

		cout<< "This is the sorted array in "<< name <<" order: ";
		for (int k = 0; k<n; k++){											// prints the array
                	cout<< arr[k]<<" ";
        	}
		cout <<endl;
	}else{
		 cout <<"ERROR: You entered an incorrect value for the array size!"<<endl;

	}
return 0;
}
