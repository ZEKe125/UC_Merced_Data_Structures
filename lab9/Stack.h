#ifndef _STACK_H 
#define _STACK_H

#include"LinkedList.h"


using namespace std; 


class Stack : public LinkedList	{
	
	public:
		Stack();
		~Stack();
		void push(int val);
		int pop();
		int& top();
		
};



#endif