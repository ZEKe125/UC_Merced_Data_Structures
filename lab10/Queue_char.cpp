

#include"Queue_char.h"
#include <iostream>
#include<assert.h>

using namespace std;

Queue :: Queue()
	:LinkedList(){
		first = NULL;
		last = NULL;
		
	}

Queue :: ~Queue(){
	
}
	
void Queue :: enqueue(char val){
	
	insertAtBack(val);
}
char Queue :: dequeue(){
	
	try{
    
		if(isEmpty()){
			throw 1;
		}
	}	
	catch (int e){
    cout << "Call to dequeue() generated an exception, because the queue is empty";
	return '\0';
	}
	
	char val = first-> val;
	bool y = removeFromFront();
	
	return val;
}
char& Queue :: front(){
	
	char& val = first-> val;
	
	try{
    
		if(isEmpty()){
			throw 1;
		}
	}	
	catch (int e){
    cout << "Call to front() generated an exception, because the queue is empty";
	return val = '\0';
	}	
	
	
	return val; 
}
