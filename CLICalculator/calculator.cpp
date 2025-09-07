#include <iostream>
#include <cmath>

// using a const char* for space is a bit cleaner than a macro
const char* space = " ";

float add(float a, float b) {
	return a + b;
}

float subst(float a, float b) {
	return a - b;
}

float multi(float a, float b) {
	return a * b;
}

float div_func(float a, float b) { // Renamed to avoid conflict with 'div' from <cstdlib>
	return a / b;
}

float power(float a, float b) {
	return pow(a, b);
}

int remainder_func(int a, int b) { // Renamed to avoid conflict with std::remainder
	return a % b;
}

int main() {
	float num1, num2;
	char opt;

	std::cout << "Enter the first number (A): ";
	std::cin >> num1;
	std::cout << "Choose the option:" << std::endl;
	std::cout << "Addition +\nSubtraction -\nMultiplication *\nDivision /\nReminder %\nPower p\n";
	std::cin >> opt;
	std::cout << "Enter the second number (B): ";
	std::cin >> num2;

	switch (opt) {
	case '+':
		std::cout << num1 << space << opt << space << num2 << " is: " << add(num1, num2) << std::endl;
		break;
	case '-':
		std::cout << num1 << space << opt << space << num2 << " is: " << subst(num1, num2) << std::endl;
		break;
	case '*':
		std::cout << num1 << space << opt << space << num2 << " is: " << multi(num1, num2) << std::endl;
		break;
	case '/':
		if (num2 == 0) {
			std::cout << "Error: Division by 0!" << std::endl;
		}
		else {
			std::cout << num1 << space << opt << space << num2 << " is: " << div_func(num1, num2) << std::endl;
		}
		break;
	case '%':
		if (num2 == 0) {
			std::cout << "Error: Cannot find the remainder of division by 0!" << std::endl;
		}
		else {
			// Cast the floats to integers for the remainder function
			std::cout << static_cast<int>(num1) << space << opt << space << static_cast<int>(num2) << " is: " << remainder_func(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
		}
		break;
	case 'p':
		std::cout << num1 << space << opt << space << num2 << " is: " << power(num1, num2) << std::endl;
		break;
	default:
		std::cout << "Invalid input!" << std::endl;
		break;
	}

	return 0;
}