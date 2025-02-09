#include <iostream>

using std::cout;
using std::endl;

int number = 7;


int main() {

	double number = 10.5;
	
	cout << "Global number: "<< ::number << endl ;
	cout << "Double local number: "<< number<< endl;
	{
		float number = 6.66;
		cout << "Float local Number: " << number << endl;
	}

	return 0;
}

