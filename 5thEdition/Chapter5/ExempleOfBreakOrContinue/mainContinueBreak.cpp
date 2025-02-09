#include <iostream>
 
using std::cout;
using std::endl;

int main() {

	cout << "Exemple of Continue" << endl;
	for (int count = 1; count <= 10; count++) 
	{
		if (count == 5)
			continue;

		cout << count << " ";
	}
	cout << "\nUsed continue to skip printing 5" << endl<<endl<<endl;

	cout << "Exemple of Continue" << endl;
	int counter;
	for (counter = 1; counter <= 10; counter++)
	{
		if (counter == 5)
			break;

		cout << counter << " ";
	}
	cout << "\nBroke out of loop at count = " << counter << endl << endl;
	return 0;
}