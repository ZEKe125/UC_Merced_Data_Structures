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

int binarySearchR(string*a, int first, int last, string k){
	
if(first <= last){	
	int index = (first+last)/2;
	if (k==a[index]){
		return index;
	}else{
		if (k < a[index]){
			
			return binarySearchR(a,first, index-1, k);
		}
		if( k > a[index] ){
			return binarySearchR(a,index+1,last,k);
		}
	}
	return -1;
	
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
		if (check==1){
			cout<<("The array is sorted in ascending order")<<endl;
			string k;
			cout<<("Please input the Key: ");
			cin>> k;
			int first = 0;
			int index = binarySearchR(data,first,count,k);
			if(index>=0){
				cout<< "Found key: "<<k<< " at index "<<index<<"."<< endl;
			}
			else if (index=-1) {
				cout<< "The key: "<<k<<" was not found in the array."<<endl;
			}
		
		
		
		}
		inFile.close();
		outFile.close();
	}else {cout<<"Unable to open file"<< endl;}
}

