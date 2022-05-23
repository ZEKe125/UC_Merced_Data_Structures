
#include "LinkedList.h"
#include "Stack.h"
#include <iostream>

using namespace std;

int main(){
	
	Stack stack1;
	
	stack1.push(0);
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.push(6);
	stack1.push(7);
	stack1.push(8);
	stack1.push(9);
	
	cout << "top: " << stack1.top()<< endl;
	cout << "size: " << stack1.size()<< endl;
	
	if (stack1.isEmpty()){
		cout<< "Stack is Empty"<< endl;
	}else{
		cout << "Stack is not Empty"<< endl;
	}
	
	stack1.print();
	
	return 0;
}
