

#include"Stack_char.h"
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
	
void Stack :: push(char val){
	
	insertAtFront(val);
}
char Stack :: pop(){
	
	int val = first-> val;
	bool y = removeFromFront();
	
	return val;
}
char& Stack :: top(){
	
	char& top = first->val;
	
	return top; 
}
