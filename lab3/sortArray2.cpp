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
        int Min;
	int swaps=0;
        int iMin;

        for (int i = 0; i< n; i++){
                Min = arr[0];
                iMin = 0;
                for(int j = 0; j<(n-i); j++){
                        if (Min > arr[j]){
                                Min=arr[j];
                                iMin=j;
				swaps++;
                        }
                }
                int temp;
                temp = arr[(n-1)-i];
                arr[(n-1)-i]=arr[iMin];
                arr[iMin]= temp;
        }

        cout << "This array was sorted in decending order: ";
        for (int k = 0; k<n; k++){
                cout<< arr[k]<<" ";
        }
        cout << endl;
        cout<< "This algorithm used the minimum for the traverse of the array"<< endl;
	cout<< "it took "<< swaps<< " swaps to sort the array..."<<endl;
}else {
        cout <<"ERROR: You entered an incorrect value for the array size!"<<endl;
}

return 0;
}
