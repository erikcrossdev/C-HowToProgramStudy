#include <iostream> //Permite que o programa gere sa�da de dados na tela

//a fun��o main inicia a execu��o do programa
int main()
{
	int number1;
	int number2;

	std::cout << "Enter first integer: "; //Solicita dados do usu�rio
	std::cin >> number1; //L� primeiro inteiro inserido pelo usu�rio em number1

	std::cout << "Enter second integer: "; //Solicita dados do usu�rio
	std::cin >> number2; //L� primeiro inteiro inserido pelo usu�rio em number2


	std::cout << "Sum is " << number1 + number2 << std::endl; //exibe sum; termina a linha

	return 0; //indica que o programa terminou com sucesso
} //fim da execu��o