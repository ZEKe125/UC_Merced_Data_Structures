
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
        //      cout << "Enter the numbers in the array, separated by a space, and press enter: ";
                        scanf( "%d" ,&arr[i]);
                }
        int Max;
        int iMax;

	for (int i = 0; i< n; i++){
		Max = arr[0];
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

        cout << "This array was sorted in acending order: ";
	for (int k = 0; k<n; k++){
		cout<< arr[k]<<" ";
	}
	cout << endl;
	cout<< "This algorithm used the maximun for the traverse of the array"<< endl; 
}else {
        cout <<"ERROR: You entered an incorrect value for the array size!"<<endl;

}
return 0;
}


