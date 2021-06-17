#include <iostream>
#include "ArrayList.h"

// Constructs an ArrayList
template <typename T>
ArrayList<T>::ArrayList() {
	arr = new T[5];
	size = 0;
	arrLength = 5;
}

// Inserts val at end of ArrayList
template <typename T>
void ArrayList<T>::add(T val) {
	if (size >= arrLength) {
		resize();
	}
	arr[size] = val;
	size++;
}

// Inserts val at index
template <typename T>
void ArrayList<T>::add(int index, T val) {
	if (size >= arrLength) {
		resize();
	}
	for (int i = size + 1; i > index; i--) {
		arr[i] = arr[i - 1];
	}
	arr[index] = val;
	size++;
}
// Replaces val at index
template <typename T>
void ArrayList<T>::replace(int index, T val) {
	arr[index] = val;
}

// Removes val at index
template <typename T>
void ArrayList<T>::remove(int index) {
	for (int i = index; i < size; i++) {
		arr[i] = arr[i + 1];
	}
	size--;
}

// Gets val at index
template <typename T>
T ArrayList<T>::get(int index) {
	return arr[index];
}

// Prints out contents of ArrayList
template <typename T>
void ArrayList<T>::print() {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

// Doubles length of ArrayList
template <typename T>
void ArrayList<T>::resize() {
	T* newArr = new T[2 * arrLength];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}
	arr = newArr;
	arrLength *= 2;
}
