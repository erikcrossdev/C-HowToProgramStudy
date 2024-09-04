#include <iostream> //Permite que o programa gere saída de dados na tela

//a função main inicia a execução do programa
int main()
{
	int number1;
	int number2;

	std::cout << "Enter first integer: "; //Solicita dados do usuário
	std::cin >> number1; //Lê primeiro inteiro inserido pelo usuário em number1

	std::cout << "Enter second integer: "; //Solicita dados do usuário
	std::cin >> number2; //Lê primeiro inteiro inserido pelo usuário em number2


	std::cout << "Sum is " << number1 + number2 << std::endl; //exibe sum; termina a linha

	return 0; //indica que o programa terminou com sucesso
} //fim da execução