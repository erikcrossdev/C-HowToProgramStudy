
#include <iostream>

using std::cout;
using std::endl;

int main() 
{
	int sum;
	int x;

	x = 1;
	sum = 0;

	while (x <= 10) {
		sum += x;
		x++;
	}
	cout << "the sum is: " << sum << endl;
	return 0;
}
