#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
int size = 0;
cout << "Enter the size of the array: ";
cin >> size;

// this if-else checks for a valid size

        if(size <=1){
        	cout<< "Error: you entered an incorrect value for the array size!"<< endl;
	}
        else {
		int array[size];
        	cout << "Enter the numbers in the array, separated by a space, and press enter: ";
		
	// this loop stores data

		for( int i =0; i < size; i++){
			scanf( "%d" ,&array[i]);
		}

		int x = 0;


	// this loop check the incr or decr values 

		for (int i = 1; i < size; i++){
			if (array[i]>array[i-1]){continue;}
			else{
				cout << "This is NOT an increasing array"<< endl;
				x++;
				for (int y=0; y<size; y++){
					cout << array[y]<< " ";
				}
				break;
			}
		}
		if (x==0){
			cout << "This is IS an increasing array"<<endl;
			for ( int j=0; j<size; j++){
				cout << array[j]<< " ";
			} 
	        }
	}

return 0;
}

