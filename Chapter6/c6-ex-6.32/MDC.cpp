#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using std::min;


int greatestCommonDivisor(int, int);

int main() {

	int num, num2;
	cout << "Type two numbers to calculate GCD of them:";
	cin >> num>>num2;

	cout << greatestCommonDivisor(num, num2) << endl;

	return 0;
}

int greatestCommonDivisor(int n1, int n2) {
    // Find Minimum of a and b 
    int result = min(n1, n2);
    cout << result << endl;
    while (result > 0) {
        if (n1 % result == 0 && n2 % result == 0) {
            break;
        }
        result--;
        cout << "Debug: (result) " << result << endl;
    }

    // Return gcd of a and b 
    return result;
}
