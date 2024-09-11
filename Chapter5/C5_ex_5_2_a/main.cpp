#include <iostream>
 
using std::cout;
using std::endl;
//sum odd number from 1 to 99

int main() {

	int count;
	int sum = 0;
	
	//This way is not valid, because it will miss step when count is 1
	/*
	for (count = 1; count <= 99;count += 2, sum += count) {
		cout << sum << endl;
	}*/


	//With this solution, we will have only 50 loops!
	int loops = 1;
	for (count = 1; count <= 99; count += 2, loops++) {
		cout << "Amount of loops: " << loops << endl;
		sum += count;		
	}
	cout << sum << endl;

	sum = 0;
	cout << "\n\n\nAnother way is:" << endl;

	/*
	But, the other solution is better, 
	because we will have less loops (50% less) and we will not need the mod operation!
	*/
	
	for (count = 1; count <= 99; count ++) {
		cout << "Amount of loops: " << count << endl;
		if (count % 2 != 0) {
			sum += count;
		}
	}
	cout << sum << endl;

	return 0;
}