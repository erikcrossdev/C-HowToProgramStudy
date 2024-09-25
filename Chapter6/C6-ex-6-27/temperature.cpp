#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double celsiusToFahrenheit(double);
double fahrenheitToCelsius(double);

int main() {
	double temperature;

	cout << "Type a celsius temperature to convert to fahrenheit: ";
	cin >> temperature;

	cout << celsiusToFahrenheit(temperature) << endl;

	cout << "Type a fahrenheit temperature to convert to celsius: ";
	cin >> temperature;

	cout<< fahrenheitToCelsius(temperature)<<endl;
	
	return 0;
}

double celsiusToFahrenheit(double temperature) {
	return (temperature * 9.0) / 5.0f + 32;
	
}

double fahrenheitToCelsius(double temperature) {	
	return (temperature - 32.0) * 5.0 / 9.0;
}