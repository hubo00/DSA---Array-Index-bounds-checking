#pragma once
// safeArray class definition in 'safeArray.h' header file
class safeArray {
private:
	int* arr;
	int size = 10;
public:
	safeArray();
	~safeArray();
	int at(int);
};