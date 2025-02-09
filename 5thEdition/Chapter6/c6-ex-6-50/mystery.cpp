#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int mystery(int a, int b) {
	if (b == 1) return a;
	return a + mystery(a, b - 1);
}
//Sum in a recursive way a, a number b of times: ex a= 2, b= 3: 2+2+2 =6
int main() {
	int x, y;
	cout << "Type two integers: ";
	cin >> x >> y;
	cout << "The result is " << mystery(x, y) << endl;
	return 0;
}