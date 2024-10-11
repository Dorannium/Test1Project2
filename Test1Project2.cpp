/*
Title: Test1 Project 2
File Name: Test1Project2.cpp
Programmer: Cody Drumheller
Date: 20241011
Requirements: Create a Calculator Program that allows the user to choose 1 of 5 arithmetic operations:
*/


#include <iostream>
#include <cmath>

using namespace std;

void calculator() {
	int choice;
	double num1, num2, result;

	while (true) {
		cout << "\nChoose an arithmetic operation:\n";
		cout << "1. Add\n";
		cout << "2. Subtract\n";
		cout << "3. Multiplication\n";
		cout << "4. Division\n";
		cout << "5. Power\n";
		cout << "6. Exit\n";
		cout << "Enter the number of the operation ";
		cin >> choice;

		if (choice == 6) {
			cout << "Exiting the calculator. Goodbye!" << endl;
			break;
		}

		if (choice < 1 || choice > 6) {
			cout << "Invalid choice. Please try again." << endl;
			continue;
		}

		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;

		switch (choice) {
		case 1:
			result = num1 + num2;
			cout << "The sum is: " << result << endl;
			break;
		case 2:
			result = num1 - num2;
			cout << "The difference is: " << result << endl;
			break;
		case 3:
			result = num1 * num2;
			cout << "The product is: " << result << endl;
			break;
		case 4:
			if (num2 != 0) {
				result = num1 / num2;
				cout << "The quotient is: " << result << endl;
				break;
			}
			else {
				cout << "Error: Division by zero is not allowed." << endl;
			}
			break;
		case 5:
			result = pow(num1, num2);
			cout << num1 << " raised to the power of " << num2 << " is: " << result << endl;
			break;
		}
	}
}

int main()
{
	calculator();
	return 0;
}


