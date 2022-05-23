
#include "LinkedList_char.h"
#include "Queue_char.h"
#include <iostream>

using namespace std;

int main(){
	
	Queue queue1;
	
	cout<< "FUNCTION CALL \t \t"<< "OUTPUT \t \t" << "QUEUE CONTENTS" << endl;
	cout << endl;
	
	cout<< "dequeue() \t \t";
	cout <<queue1.dequeue()<< "\t \t";
	queue1.print();
	cout<< endl;
	
	cout<< "enqueue('D') \t \t \t \t";
	queue1.enqueue('D');
	queue1.print();
	cout<< endl;
	
	cout<< "enqueue('A') \t \t \t \t";
	queue1.enqueue('A');
	queue1.print();
	cout<< endl;
	
	cout<< "dequeue() \t \t";
	cout <<queue1.dequeue()<< "\t \t";
	queue1.print();
	cout<< endl;
	
	cout<< "size() \t \t \t";
	cout <<queue1.size()<< "\t \t";
	queue1.print();
	cout<< endl;
	
	cout<< "enqueue('D') \t \t \t \t";
	queue1.enqueue('D');
	queue1.print();
	cout<< endl;
	
	cout<< "isEmpty() \t \t";
	if (queue1.isEmpty()){
		cout<< "true \t \t";
	}else cout << "false \t \t";
	queue1.print();
	cout<< endl;
	
	cout<< "front() \t \t";
	cout <<queue1.front()<< "\t \t";
	queue1.print();
	cout<< endl;
	
	cout<< "enqueue('T') \t \t \t \t";
	queue1.enqueue('T');
	queue1.print();
	cout<< endl;
	
	cout<< "front() \t \t";
	cout <<queue1.front()<< "\t \t";
	queue1.print();
	cout<< endl;
	
	
	return 0;
}
