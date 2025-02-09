#include <iostream>
using std::cout;
using std::endl;

void useLocal(void); //void as a parameters indicates that the function has no parameters too
void useStaticLocal(); //same way to say a fucntion has no parameters;
void useGlobal(void);

int x = 1; //global variable

int main()
{
	int x = 5; //local variable inside main
	cout << "Local x in main's outer scope is " << x << endl;

	{//new scope
		int x = 7; //hide x on extern scope

		cout << "Local x in main's inner scope is " << x << endl;
	}
	cout << "Local x in main's outer scope is " << x << endl;

	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();

	cout << "Local x in main  scope is " << x << endl;

	return 0;
}

void useLocal(void) {
	cout << "\n\nuseStaticLocal";
	int x = 25; //hide x on extern scope
	cout << "\nLocal x in on useLocal function: " << x << endl;
	x++;
	cout << "Local x in on useLocal function: " << x << endl;
}

void useStaticLocal() {
	static int x = 50; //hide x on extern scope
	cout << "\n\nuseStaticLocal";
	cout << "\nLocal x in on useStaticLocal function: " << x << endl;
	x++;
	cout << "Local x in on useStaticLocal function: " << x << endl;
}

void useGlobal(void) {
	cout << "\n\nuseStaticLocal";
	cout << "\nGlobal x in on useGlobal function: " << x << endl;
	x *=10;
	cout << "Global x in on useGlobal function: " << x << endl;
}