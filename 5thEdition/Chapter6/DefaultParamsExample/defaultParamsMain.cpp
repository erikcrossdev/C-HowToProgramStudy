#include <iostream>

using std::cout;
using std::endl;

int boxVolume(int length = 1, int width = 1, int height = 1);


int main() {

	
	cout << "The default boxVolume: " << boxVolume()<<endl<<endl;

	cout << "The boxVolume with length 2:  " << boxVolume(2) << endl << endl;
	cout << "The boxVolume with length = 2, width = 1, height = 1:  " << boxVolume(2) << endl << endl;;
	cout << "The boxVolume with length = 2, width = 3, height = 1:  " << boxVolume(2,3) << endl << endl;
	cout << "The boxVolume with length = 4, width = 2, height = 3:  " << boxVolume(4, 2, 3) << endl << endl;
	return 0;
}

int boxVolume(int length, int  width, int height) {
	cout << "boxVolume Function --> Length: " << length << " Width: " << width << " Height: " << height << "\n";
	return length * width * height;
}
