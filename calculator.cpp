/*
Author: Brandon Ayton

Date 4-12-2025

Description: A calculator that does the four basic operands.
*/

#include <iostream>
using namespace std;

int main() {

	double number1;
	double number2;
	char operand;
	double answer;
	char again;

	do {

		cout << "Enter your first number: ";
		cin >> number1;
		cout << "\nEnter your second number: ";
		cin >> number2;

		cout << "\nEnter operation (+ - * /): ";
		cin >> operand;

		switch (operand) {
		case '+':
			answer = number1 + number2;
			cout << "\nResult: " << answer;
			break;
		case '-':
			answer = number1 - number2;
			cout << "\nResult: " << answer;
			break;
		case '*':
			answer = number1 * number2;
			cout << "\nResult: " << answer;
			break;
		case '/':
			if (number2 == 0) {
				cout << "\nError: Divide by 0.";
				break;
			} 

			answer = number1 / number2;
			cout << "\nResult: " << answer;
			break;
			
		default:
			cout << "Your input is incorrect.";

		}
		cout << "\nDo you want to perform another calculation? (y/n): ";
		cin >> again;
		cout << endl;

	} while (again == 'y' || again == 'Y');

	return 0;
}
