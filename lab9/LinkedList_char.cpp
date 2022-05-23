#include"LinkedList_char.h"
#include<assert.h>
#include <iostream>


LinkedList::LinkedList() {

first = NULL;
last = NULL;
}

LinkedList::~LinkedList(){

Node* temp = first;

	while(temp != NULL){
		temp = temp->next;
		delete(first);
		first = temp;
	}
}

void LinkedList :: insertAtBack(char valueToInsert) {

	Node* newNode = new Node();
	newNode->val = valueToInsert;
	newNode->next = NULL;

	Node* temp = first;

	if (temp != NULL){

		while (temp->next != NULL){
			temp = temp->next;
		}
//cout << "works";
		temp->next = newNode;
	}else{
		first = newNode;
	}

}

bool LinkedList ::  removeFromBack() {

	if (first == NULL && last == NULL) {
		return false;
	}

	if (first == last){
		//cout<<"First is equal to Last."<<endl;
		delete(first);
		first = last = NULL;
		return true;
	}else{
		Node* temp = first;
		int nodeCount = 0;

		while (temp != NULL){
			nodeCount = nodeCount++;
			temp = temp->next;
		}

		Node* temp2 = first;

		for(int i = 1; i < (nodeCount - 1); i++){

			temp2 = temp2->next;
		}


		delete(temp2->next);

		last = temp2;
		last->next = NULL;

		return true;
	}

}

void LinkedList :: print() {

	Node* temp = first;

	if (temp  == NULL) {
		cout<<"";
	}else if (temp->next == NULL) {
		cout << temp->val;
	}else {
		
		while (temp != NULL){
			cout<< temp->val;
			temp = temp->next;
			cout<< ",";
		}
	}

}

bool LinkedList :: isEmpty(){

if (first == NULL && last == NULL) {
	return true;

}else {
	return false;
}
}

int LinkedList :: size(){

	if (first == NULL && last == NULL){
		return 0;
	}

	Node* temp = first;
	int nodeCounter = 0;

	while (temp != NULL){
		nodeCounter++;
		temp = temp->next;
	}
	return nodeCounter;

}

void LinkedList :: clear(){
	
	Node* temp = first;
	while(temp != NULL){
		//temp = first;
	//	first = first->next;
		temp = temp->next;
		first = temp;
		delete(temp);
		
	}

}
void LinkedList :: insertAtFront(char valueToInsert){
	
	Node* newNode = new Node();

	newNode->val = valueToInsert;

  	if(first == NULL){
		 
   		first = newNode;
		
   	}else{
   		
		newNode->next = first;
   		first = newNode;
   	}


}

bool LinkedList :: removeFromFront(){

	if (first == NULL && last == NULL){
		return false;
	}else{
		Node* temp;

		temp = first;
		first = first->next;

		delete(temp);

		return true;
	}

}
