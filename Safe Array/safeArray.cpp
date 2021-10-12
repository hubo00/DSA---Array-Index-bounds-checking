#include <iostream>
#include "safeArray.h"

// Body of safeArray Class
int safeArray::at(int value) {
	if (value >= size) {
		std::cout << "Array index out of bounds" << std::endl;
 		return -1;
	}
	else {
		std::cout << arr[value] << std::endl;
		return value;
	}
}

// Constructor for the safeArray Class
safeArray::safeArray() {
	std::cout << "In the Constructor" << std::endl;
	arr = new int[10];
	size = 10;
	// Loops through the array, and assigns a value of 0 for each index
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

// Destructor for the safeArray Class
safeArray::~safeArray() {
	std::cout << "In the Destructor" << std::endl;
	delete[] arr;
	arr = NULL;
}