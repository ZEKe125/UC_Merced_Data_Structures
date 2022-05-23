

#include"Stack.h"
#include <iostream>
#include<assert.h>

using namespace std;

Stack :: Stack()
	:LinkedList(){
		first = NULL;
		last = NULL;
		
	}

Stack :: ~Stack(){
	
}
	
void Stack :: push(int val){
	
	insertAtFront(val);
}
int Stack :: pop(){
	
	int val = first-> val;
	bool y = removeFromFront();
	
	return val;
}
int& Stack :: top(){
	
	int& val = first-> val;
	return val; 
}
