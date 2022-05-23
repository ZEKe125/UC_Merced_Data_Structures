#include <iostream>
#include <string>
using namespace std;
int main(){

cout << "Enter the String to reverse: ";
string input;
cin >> input;
string revrs = input;

// this loop reverses the string

for (int i=0; i<input.size(); i++){
	revrs[i]= input[input.size()-(i+1)];
	
}
cout <<"The reverse String is: " << revrs;
return 0;
}
