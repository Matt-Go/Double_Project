#include <iostream>
#include "LinkedList.h"

// Contructor
LinkedList::LinkedList() {
	head = NULL;
}

// Inserts val at front of list
void LinkedList::insertBeg(int val) {
	Node* temp = new Node;
	temp->data = val;
	temp->next = head;
	head = temp;
}

// Inserts val at back of list
void LinkedList::insertEnd(int val) {
	Node* temp = new Node;
	temp->data = val;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		return;
	}
	Node* curr = head;
	while (curr->next != NULL) {
		curr = curr->next;
	}
	curr->next = temp;
}
// Inserts val at index
void LinkedList ::insertAt(int index, int val) {
	Node* temp = new Node;
	Node* prev = new Node;
	Node* curr = head;
	for (int i = 0; i < index; i++) {
		prev = curr;
		curr = curr->next;
	}
	temp->data = val;
	prev->next = temp;
	temp->next = curr;
}

// Removes val from list at index
void LinkedList::remove(int index) {
	Node* prev = new Node;
	Node* curr = new Node;
	curr = head;
	for (int i = 0; i < index; i++) {
		prev = curr;
		curr = curr->next;
	}
	prev->next = curr->next;
}

// Removes val from list
void LinkedList::removeVal(int val) {
	if (head->data == val) {
		head = head->next;
		return;
	}
	Node* prev = new Node;
	Node* curr = head;
	while (curr->data != val) {
		prev = curr;
		curr = curr->next;
	}
	prev->next = curr->next;
}

// Gets value at index
int LinkedList::get(int index) {
	Node* curr = head;
	for (int i = 0; i < index; i++) {
		curr = curr->next;
	}
	return curr->data;
}

// Prints out contents of list
void LinkedList::print() {
	Node* curr = head;
	while (curr != NULL) {
		std::cout << curr->data << " ";
		curr = curr->next;
	}
	std::cout << std::endl;
}