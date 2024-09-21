#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	float firstNumber;
	float secondNumber;
	char operation;

	cout << "Введите первое число: ";
	cin >> firstNumber;

	cout << "\nВведите второе число: ";
	cin >> secondNumber;

	cout << "\nВведите операцию (+, -, *, / , %): ";
	cin >> operation;

	if (secondNumber == 0 && operation == '/' || operation == '%')
	{
		cout << "\n\x1b[91mОшибка!\x1b[0m Делить на 0 нельзя)0))";
		int _; cin >> _;
		return 0;
	}

	if (operation == '+')
		cout << firstNumber << " + " << secondNumber << " = " << "\x1b[95m" << firstNumber + secondNumber << "\x1b[0m" << endl;
	else if (operation == '-')
		cout << firstNumber << " - " << secondNumber << " = " << "\x1b[95m" << firstNumber - secondNumber << "\x1b[0m" << endl;
	else if (operation == '*')
		cout << firstNumber << " * " << secondNumber << " = " << "\x1b[95m" << firstNumber * secondNumber << "\x1b[0m" << endl;
	else if (operation == '/')
		cout << firstNumber << " / " << secondNumber << " = " << "\x1b[95m" << firstNumber / secondNumber << "\x1b[0m" << endl;
	else if (operation == '%')
		cout << firstNumber << " % " << secondNumber << " = " << "\x1b[95m" << (int)firstNumber % (int)secondNumber << "\x1b[0m" << endl;

	int _; cin >> _;
	return 0;
}