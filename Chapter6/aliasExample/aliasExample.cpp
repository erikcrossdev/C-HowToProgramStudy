#include <iostream>

using std::cout;
using std::endl;

int main() {
	
	int x = 3;
	int &y = x;  // & means that y is an alias to x.
	//int &y;    //an alias must be initialized!!!! Error: 'y' declared as a reference but not initialized
	
	cout << "x: " << x << " alias y: " << y << endl;
	y = 7; //Yes, y can change the value of x too!
	cout << "x: " << x << " alias y: " << y << endl;
	return 0;
}
