#pragma once

class LinkedList {

	public:

		// Contructor
		LinkedList();

		// Inserts val at front of list
		void insertBeg(int val);

		// Inserts val at back of list
		void insertEnd(int val);

		// Inserts val at index
		void insertAt(int index, int val);

		// Removes val from list at index
		void remove(int index);

		// Removes val from list
		void removeVal(int val);

		// Gets val at index
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