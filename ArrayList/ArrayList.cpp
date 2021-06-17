#include <iostream>
#include "ArrayList.h"

// Constructs an ArrayList
ArrayList::ArrayList() {
	arr = new int[5];
	size = 0;
	arrLength = 5;
}

// Inserts value at end of ArrayList
void ArrayList::add(int val) {
	if (size >= arrLength) {
		resize();
	}
	arr[size] = val;
	size++;
}

// Inserts value at index
void ArrayList::add(int index, int val) {
	if (size >= arrLength) {
		resize();
	}
	for (int i = size + 1; i > index; i--) {
		arr[i] = arr[i - 1];
	}
	arr[index] = val;
	size++;
}

// Replaces value at index
void ArrayList::replace(int index, int val) {
	arr[index] = val;
}

// Removes value at index
void ArrayList::remove(int index) {
	for (int i = index; i < size; i++) {
		arr[i] = arr[i + 1];
	}
	size--;
}

// Gets value at index
int ArrayList::get(int index) {
	return arr[index];
}

// Prints out contents of ArrayList
void ArrayList::print() {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

// Doubles length of ArrayList
void ArrayList::resize() {
	int* newArr = new int[2 * arrLength];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}
	arr = newArr;
	arrLength *= 2;
}
