#pragma once

class ArrayList {

public:

	// Constructor
	ArrayList();

	// Inserts value at end of ArrayList
	void add(int val);

	// Inserts value at index
	void add(int index, int val);

	// Replaces value at index
	void replace(int index, int val);

	// Removes value from index
	void remove(int index);

	// Gets value at index
	int get(int index);

	// Prints out contents of ArrayList
	void print();

private:

	int* arr;
	int size;
	int arrLength;

	// Doubles length of ArrayList
	void resize();

};
