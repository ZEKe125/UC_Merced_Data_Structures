#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
cout << "Enter the size of a 2D array (1-10 Please): ";
int n;
cin >> n;
if (n >= 1 && n <=10){
	int arr[n][n];
	int c = 0;

// this loop recieves and stores data

	for (int i =0; i < n; i++){
		cout << "Enter the values in the array for row " << (i+1) 
			<<", separated by a space, and press enter: ";
		for (int y =0; y<n;y++){
			scanf( "%d" ,&arr[i][y]);
		}
		
	}

// this loop checks for negative values

	for (int x = 0; x<n; x++){
		for (int h = 0; h<n; h++){
			if( arr[x][h]<0){
				c++;
                        }
                }
	}
                if(c > 0){
                        cout << "There are " << c << " negative values!"<< endl;
                }else{
                        cout << "All values are non-negative!"<< endl;
                }


		
}else {
	cout <<"ERROR: your array is too large! Enter 1 to 10"<< endl;
}

return 0 ;
}
