

#include"Queue.h"
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
	
void Queue :: enqueue(int val){
	
	insertAtBack(val);
}
int Queue :: dequeue(){
	
	try{
    
		if(isEmpty()){
			throw 1;
		}
	}	
	catch (int e){
    cout << "Call to dequeue() generated an exception, because the queue is empty"<< '\n';
	
	}
	
	int val = first-> val;
	bool y = removeFromFront();
	
	return val;
}
int& Queue :: front(){
	
	try{
    
		if(isEmpty()){
			throw 1;
		}
	}	
	catch (int e){
    cout << "Call to front() generated an exception, because the queue is empty"<< '\n';
	
	}	
	
	int& val = first-> val;
	return val; 
}
