#ifndef _STACK_H 
#define _STACK_H

#include"LinkedList_char.h"


using namespace std; 


class Stack : public LinkedList	{
	
	public:
		Stack();
		~Stack();
		void push(char val);
		char pop();
		char& top();
		
};



#endif