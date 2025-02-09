#include <iostream>
using std::cout;
using std::endl;


void tryModifyArray(const int[]);

int main()
{
	int a[] = { 0, 1, 2 };
	tryModifyArray(a);
	cout << " a[0] = " << a[0] << " a[1] = " << a[1] << " a[2]= " << a[2] << endl;

	return 0;
}

void tryModifyArray(const int b[]) {
	cout << "Cannot modify array with cosnt qualifier!" <<
		"\nUse this when you want to make sure that the fucntion does not change the original array"<<endl;
	//const arrays cannont be modified if "const" is used as a parameter qualifier
	/*
	b[0] /=2; //error. b is read only!
	b[1] /=2; //error
	b[2] /=2; //error
	*/
}
