#include <assert.h>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;


int checkArraySort(string* a,int size){


	if (a[0] < a[1]){
		int count =0;
		for (int i= 2; i<size-1; i++){
			if (!(a[i]<a[i+1])){
				count++;
			}

		}
		if (count==0){
			return 1;
		}
	}

  if (a[0]> a[1]){
                int count =0;
                for (int i= 2; i<size-1; i++){
                        if (!(a[i]>a[i+1])){
                                count++;
                        }
                }
                if (count==0){
                        return -1;
                }
  }
  else {
	return 0;
  }




}
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
		int check = checkArraySort(data,count);
		if (check==-1){cout<<("The array is sorted in descending order")<<endl;}
		if (check==0){cout<<("The array is not sorted!")<<endl;}
		if (check==1){cout<<("The array is sorted in ascending order")<<endl;}
		inFile.close();
		outFile.close();
	}else {cout<<"Unable to open file"<< endl;}
}
