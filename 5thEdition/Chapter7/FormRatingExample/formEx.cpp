#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;


int main() {
	const int responseSize = 40;
	const int frequencySize = 11;

	const int responses[responseSize] = { 1,2,6,4,8,5,9,7,8,10,10
		,6,3,8,6,10,3,8,8,7,6,5,7,6,8,6,7,5,6,9,5,6,7,5,6,4,8,6,8,10 };

	int frequency[frequencySize] = { 0 };

	for (int answer = 0; answer < responseSize; answer++) {
		frequency[responses[answer]]++;
	}

	cout << "Ratings" << setw(17) << "Frequency" << endl;

	for (int ratings = 0; ratings < frequencySize; ratings++) {
		cout << setw(6) << ratings<<setw(17)<< frequency[responses[ratings]]<<endl;
	}

	return 0;
}