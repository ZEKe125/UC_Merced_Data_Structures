#include<iostream>
#include<stdlib.h>

using namespace std;


string combineStr( string a, int b){		// this fuction uses recursion to combine a string 

	if (b==1){
		return a;						
	}
	else{
		return a + combineStr( a, b-1);
	}
}


int main(){
string str;
int times;
cout<< "Enter a String: ";
cin >> str;
cout << "Enter a number a number of times: ";
cin >> times;
	if (times ==0){			// terminates the script
		exit(1);
	}

cout<< "The resulting String is: ";
cout<<  combineStr( str,times) << endl ;			// prints out results
main();



return 0;
}

