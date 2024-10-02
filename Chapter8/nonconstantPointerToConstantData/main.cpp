// Fig. 8.10: fig08_10.cpp
// Attempting to modify data through a 
// nonconstant pointer to constant data.

void f(int const*); // prototype

int main() {
	int y{ 0 };

	f(&y); // f will attempt an illegal modification
}

// constant variable cannot be modified through xPtr
void f(int const* xPtr) {
	//*xPtr = 100; // error: cannot modify a const object
}