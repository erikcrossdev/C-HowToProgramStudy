#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cmath>

int main() {

	cout << "N\t\t10*N\t\t100*N\t\t1000*N" << endl;
	for (int i = 1; i <= 5; i++) 
	{
		cout << i << "\t\t" << i * 10 << "\t\t" << i * 100 << "\t\t" << i * 1000 << endl;
	}
	return 0;
}