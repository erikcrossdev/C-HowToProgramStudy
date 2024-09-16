#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout;
using std::endl;
using std::setw;
using std::floor;
using std::fixed;
using std::setprecision;

int roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main() {

	cout <<fixed<<setprecision(5)<< "Original value was " << 6.666 << "\nRounded is " << roundToInteger(6.666)<<endl;
	cout << "Original value was " << 666.6234234 << "\nRounded is " << roundToTenths(666.6234234) << endl;
	cout << "Original value was " << 666.34566 << "\nRounded is " << roundToHundredths(666.34566) << endl;
	cout << "Original value was " << 8666.23466 << "\nRounded is " << roundToThousandths(8666.23466) << endl;
	return 0;
}

int roundToInteger(double val)
{
	int result = floor(val + .5);
	return result;
}

double roundToTenths(double val) 
{
	double result = floor(val * 10 + .5)/10;
	return result;
}

double roundToHundredths(double val) 
{
	double result = floor(val * 100 + .5) / 100;
	return result;
}

double roundToThousandths(double val) 
{
	double result = floor(val * 1000 + .5) / 1000;
	return result;
}