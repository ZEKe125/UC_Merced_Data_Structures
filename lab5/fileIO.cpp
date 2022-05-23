#include <assert.h>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
string line;

	ifstream inFile ("words_in.txt");
	if (inFile.is_open()){
		int count =0;
		while ( getline (inFile,line) ){
			count++;
		}
		inFile.close();

		//cout << count;
		string* data = new string[count];
		inFile.open("words_in.txt");
		ofstream outFile ("words_out.txt");
		for (int i=0;i<count;i++){
			getline(inFile, data[i]);
			outFile << (data[i])<< endl;
                }

		inFile.close();
	}

	else cout << "Unable to open file"; 




}
