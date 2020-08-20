#include <iostream>

void SizeOfTypes();
void CurrencyConverter();

void Chapter4Drills()
{
	//SizeOfTypes();
	CurrencyConverter();
	
}

static void SizeOfTypes()
{
	std::cout << "char: " << sizeof(char) << std::endl;
	std::cout << "int: " << sizeof(int) << std::endl;
	std::cout << "float: " << sizeof(float) << std::endl;
	std::cout << "double: " << sizeof(double) << std::endl;
	std::cout << "long long int: " << sizeof(long long int) << std::endl;
}

static void CurrencyConverter()
{
	char unit = ' ';
	int value;
	constexpr double yenToDollar = .0094;
	constexpr double kronerToDollar = .11;
	constexpr double poundsToDollar = 1.31;
	double answer = 0.0;

	std::cout << "Please enter a value follwed by a unit ([y]en, [k]roner or [p]ounds)\n";
	std::cin >> value >> unit;

	if (unit == 'y') {
		answer = value * yenToDollar;
	}
	else if (unit == 'k') {
		answer = value * kronerToDollar;
	}
	else if (unit == 'p') {
		answer = value * poundsToDollar;
	}
	else {
		std::cout << "Hey no cheating!";
		return;
	}
	std::cout << "\nThat's $" << answer << ". Wow!";
	return;
}