#include"HTable.h"
#include<string>
#include<iostream>
#include<assert.h>

using namespace std;

HTable :: HTable(){
	
	dt = new data[23];
    max_size = 23;
	
	for(int i = 0; i<23; i++){
		
		dt[i].key = -1;
		dt[i].value = "N/A";
	}
	
	numel = 0;
}

HTable :: HTable(int t_size){
	
	 if (t_size <= 0){
		t_size = 23;
	 }
	 
    dt = new data[t_size];
    max_size = t_size;
	
	for(int i = 0; i<t_size; i++){
		
		dt[i].key = -1;
		dt[i].value = "N/A";
	}
	
	numel = 0;
}


int HTable :: hash(int &k){
	
	int index;
	index = k%max_size;
	
	
    return index;
	

}
int HTable :: rehash(int &k){

	int index;
	index = (k+1)%max_size;
    return index;
	
	
	
}
int HTable :: add(data &d){
	
	int index = hash(d.key);
	int count;
	for(int i = 0; i<max_size; i++){
		
		if(dt[index].key != -1){
			index = rehash(index);
			count++;
		}else {
			dt[index] = d;
			numel++;
			return 0;
		}
	}
	
   return -1;
}
int HTable :: remove(data &d){
	
	int index = hash(d.key);
	
		for(int i = 0; i<max_size; i++){
			if (dt[index].key == d.key){
				dt[index].key = -1;
				dt[index].value = "N/A";
				numel--;
				return 0;
			}
			index = rehash(index);		
		}
	
    return -1;
}

void HTable :: output(){
	
	for(int i = 0; i<max_size; i++){
		cout<< i <<" -> "<< dt[i].key<< "\t \t" << dt[i].value << endl; 
	}
	cout << "There are "<< numel << " data in the table."<< endl;
}


