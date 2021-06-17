#pragma once

class LinkedList {

	public:

		// Contructor
		LinkedList();

		// Inserts value at front of list
		void insertBeg(int val);

		// Inserts value at back of list
		void insertEnd(int val);

		// Inserts value at index
		void insertAt(int index, int val);

		// Removes value from list at index
		void remove(int index);

		// Removes value from list
		void removeVal(int val);

		// Gets value at index
		int get(int index);

		// Prints out contents of list
		void print();

	private:

		struct Node {
			int data;
			Node *next;
		};

		Node *head;
};