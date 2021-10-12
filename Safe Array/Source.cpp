/*
Hubert Bukowski | x00161897

Worked With:
	Daniel Cullen | x00168408
*/
#include <iostream>
#include "safeArray.h"

int main() {
	safeArray mySafeArray;

	// Pass an invalid index value
	// mySafeArray.at(12);

	// Pass a valid index value
	mySafeArray.at(8);

	return 0;
}