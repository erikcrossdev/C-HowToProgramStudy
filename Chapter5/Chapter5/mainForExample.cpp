#include <iostream>

using std::cout;
using std::endl;
//Sum pair numbers from 2 until 20.
int main() {
	
	int total = 0;
	//Increment total on the for instruction, for does not need a body in this way
	for (int number = 2; number <= 20; total += number, number += 2);
	
	cout << "Sum is " << total << endl;


	//More readable way to do the same increment
	total = 0;
	for (int number = 2; number <= 20; number += 2) 
	{
		total += number;
	}

	cout << "Sum is " << total << endl;

	return 0;
}