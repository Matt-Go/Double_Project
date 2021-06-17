#pragma once

template <typename T>
class ArrayList {

	public:

		// Constructor
		ArrayList();

		// Inserts val at end of ArrayList
		void add(T val);

		// Inserts val at index
		void add(int index, T val);

		// Replaces val at index
		void replace(int index, T val);

		// Removes val from index
		void remove(int index);

		// Gets val at index
		T get(int index);

		// Prints out contents of ArrayList
		void print();

	private:

		T* arr;
		int size;
		int arrLength;

		// Doubles length of ArrayList
		void resize();

};
