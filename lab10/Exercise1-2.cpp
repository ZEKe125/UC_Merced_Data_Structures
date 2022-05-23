
#include "LinkedList.h"
#include "Queue.h"
#include <iostream>

using namespace std;

int main(){
	
	Queue queue1;
	
	queue1.enqueue(0);
	queue1.print();
	cout<< endl;
	queue1.enqueue(1);
	queue1.print();
	cout<< endl;
	queue1.enqueue(2);
	queue1.print();
	cout<< endl;
	queue1.enqueue(3);
	queue1.print();
	cout<< endl;
	queue1.enqueue(4);
	queue1.print();
	cout<< endl;
	queue1.enqueue(5);
	queue1.print();
	cout<< endl;
	queue1.enqueue(6);
	queue1.print();
	cout<< endl;
	queue1.enqueue(7);
	queue1.print();
	cout<< endl;
	queue1.enqueue(8);
	queue1.print();
	cout<< endl;
	queue1.enqueue(9);
	queue1.print();
	cout<< endl;
	
	cout << "front: " << queue1.front()<< endl;
	cout << "size: " << queue1.size()<< endl;
	
	cout << "dequeue: " << queue1.dequeue()<< endl;
	queue1.print();
	cout<< endl;
	cout << "dequeue: " << queue1.dequeue()<< endl;
	queue1.print();
	cout<< endl;
	cout << "dequeue: " << queue1.dequeue()<< endl;
	queue1.print();
	cout<< endl;
	cout << "dequeue: " << queue1.dequeue()<< endl;
	queue1.print();
	cout<< endl;
	cout << "dequeue: " << queue1.dequeue()<< endl;
	queue1.print();
	cout<< endl;
	cout << "dequeue: " << queue1.dequeue()<< endl;
	queue1.print();
	cout<< endl;
	cout << "front: " << queue1.front()<< endl;
	cout << "size: " << queue1.size()<< endl;
	cout << "front: " << queue1.front()<< endl;
	cout << "size: " << queue1.size()<< endl;
	
	if (queue1.isEmpty()){
		cout<< "Queue is Empty"<< endl;
	}else{
		cout << "Queue is not Empty"<< endl;
	}
	
	queue1.print();
	
	return 0;
}
