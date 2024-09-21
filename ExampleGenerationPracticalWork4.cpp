#include <iostream>

using namespace std;

float _firstNumber;
float _secondNumber;
char _operation;

void userInput() {
	system("cls");

	cout << "Введите первое число: ";
	cin >> _firstNumber;

	cout << "\nВведите второе число: ";
	cin >> _secondNumber;

	cout << "\nВведите операцию (+, -, *, / , %): ";
	cin >> _operation;
}

void calculateExample() {
	if (_secondNumber == 0 && (_operation == '/' || _operation == '%')) {
		cout << "\n\x1b[91mОшибка!\x1b[0m Делить на 0 нельзя.\n";
		return;
	}

	if (_operation == '+')
		cout << "\n" << _firstNumber << " + " << _secondNumber << " = " << "\x1b[95m" << _firstNumber + _secondNumber << "\x1b[0m" << endl;
	else if (_operation == '-')
		cout << "\n" << _firstNumber << " - " << _secondNumber << " = " << "\x1b[95m" << _firstNumber - _secondNumber << "\x1b[0m" << endl;
	else if (_operation == '*')
		cout << "\n" << _firstNumber << " * " << _secondNumber << " = " << "\x1b[95m" << _firstNumber * _secondNumber << "\x1b[0m" << endl;
	else if (_operation == '/')
		cout << "\n" << _firstNumber << " / " << _secondNumber << " = " << "\x1b[95m" << _firstNumber / _secondNumber << "\x1b[0m" << endl;
	else if (_operation == '%')
		cout << "\n" << _firstNumber << " % " << _secondNumber << " = " << "\x1b[95m" << (int)_firstNumber % (int)_secondNumber << "\x1b[0m" << endl;
}

bool checkStopСalculation() {
	cout << "\nВведите \x1b[95m\"+\"\x1b[0m, чтобы ввести следующий пример или \x1b[95m\"-\"\x1b[0m, если хотите завершить программу.";

	char userInputChar;
	cin >> userInputChar;

	while (userInputChar == '+' || userInputChar == '-')
	{
		if (userInputChar == '+')
			return true;
		else if (userInputChar == '-')
			return false;
		else
			cout << "\nВведён некоректный символ, повторите ввод.";
	}

	return true;
}

int main()
{
	setlocale(0, "");

	do {
		userInput();
		calculateExample();
	} while (checkStopСalculation());

	return 0;
}