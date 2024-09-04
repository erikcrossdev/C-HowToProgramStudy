#include<iostream>
//Raio circunferencia e area

using std::cout;
using std::cin;
using std::endl;

int main() {
	const float PI = 3.14159f;
	float diametro, circunferencia, area, raio;

	cout << "Digite o raio: ";
	cin >> raio;

	diametro = 2 * raio;
	circunferencia = 2 * PI * raio;
	area = PI * (raio * raio);
	cout << "Diametro: "<<diametro<<endl;
	cout << "Circunferencia: " << circunferencia << endl;
	cout << "Area: " << area << endl;


	return 0;
}