
#include "LinkedList_char.h"
#include "Stack_char.h"
#include <iostream>

using namespace std;

int main(){
	
	Stack stack1;
	
	cout<< "FUNCTION CALL \t"<< "OUTPUT \t" << "STACK CONTENTS" << endl;
	cout << endl;
	cout<< "isEmpty() \t";
	if (stack1.isEmpty()){
		cout<< "true \t";
	}else cout << "false \t";
	stack1.print();
	cout<< endl;
	cout<< "stack1.push('A') \t \t";
	stack1.push('A');
	stack1.print();
	cout<< endl;
	cout<< "stack1.push('Y') \t \t";
	stack1.push('Y');
	stack1.print();
	cout<< endl;
	cout<< "size() \t \t";
	cout <<stack1.size()<< "\t \t";
	stack1.print();
	cout<< endl;
	cout<< "pop() \t \t";
	cout <<stack1.pop()<< "\t \t";
	stack1.print();
	cout<< endl;
	cout<< "isEmpty() \t";
	if (stack1.isEmpty()){
		cout<< "true \t \t";
	}else cout << "false \t \t";
	stack1.print();
	cout<< endl;
	cout<< "stack1.push('D') \t \t";
	stack1.push('D');
	stack1.print();
	cout<< endl;
	cout<< "top() \t \t";
	cout <<stack1.top()<< "\t \t";
	stack1.print();
	cout<< endl;
	cout<< "stack1.push('T') \t \t";
	stack1.push('T');
	stack1.print();
	cout<< endl;
	cout<< "pop() \t \t";
	cout <<stack1.pop()<< "\t \t";
	stack1.print();
	cout<< endl;
	

	
	return 0;
}
