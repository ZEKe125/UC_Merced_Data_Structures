#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void sortArr(int arr[],int order,int n){

	if (order == 0){
																// this loop sorts the array in ascending order with 	
		for (int i =1; i< n; i++){								// insertion sort
                        int temp = arr[i];
                        int j;
                        for ( j= i-1; j >= 0 && arr[j] > temp; j--){
                                arr[j+1] = arr[j];
                        }
                                arr[j+1] = temp;

                }

	}
	if (order == 1){

                for (int i = 1; i< n; i++){						// this loop sorts the array in decending order with 
                        int temp = arr[i];						// insertion sort
                        int j;
                        for ( j= i-1; j >= 0 && arr[j] < temp; j--){
                                arr[j+1] = arr[j];
                        }
                                arr[j+1] = temp;
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
		string name;												// turns the order int to a name String
		if (order == 0 ){
		name="ascending";
		}if (order == 1 ){
                name="descending";
		}

		cout<< "This is the sorted array in "<< name <<" order: ";		// prints the array
		for (int k = 0; k<n; k++){
                	cout<< arr[k]<<" ";
        	}
		cout <<endl;
	}else{
		 cout <<"ERROR: You entered an incorrect value for the array size!"<<endl;

	}
return 0;
}
