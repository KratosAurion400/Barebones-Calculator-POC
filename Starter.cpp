// Starter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Enter a number and operator, return result. //
#include <iostream>
using namespace std;
int main() {
	int result{};
	int num1;
	int num2;
	char op;
	num1 = 1;
	num2 = 2;
	cout << "Enter a number" << endl;
	cin >> num1;
	cout << "Enter operator" << endl;
	cin >> op;
	cout << "Enter another number" << endl;
	cin >> num2;
	if (op == '+') {
		result = num1 + num2;
	}
	else if (op == '-') {
		result = num1 - num2;
	}
	else if (op == '*') {
		result = num1 * num2;
	}
	else if (op == '/') {
		result = num1 / num2;
	}
	else {
		cout << "Invalid operator" << endl;
	}
	cout << result;

	return 0;


}








