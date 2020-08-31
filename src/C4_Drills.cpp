//#include <iostream>
//#include <vector>
//#include <string>
//// needed for sort
//#include <algorithm>

#include "Drills.h"

// Presented are the drills and TryThis exercises from Chapter4

void sizeOfTypes(), currencyConverter(), charLooper(), crappySquare(), bigBrotherCensor();
void drill1(), drill2_and_3(), drill4(), drill5(), drill6(), drill7_8(), drill9_10_11();
// for drill 7_8
static bool legalUnit(std::string unit);
static double convertUnitsToCm(std::string unit, double amount);

void Chapter4Drills()
{
	//sizeOfTypes();
	//currencyConverter();
	//charLooper();
	//crappySquare();
	//bigBrotherCensor();
	//drill1();
	//drill2_and_3();
	//drill4();
	//drill5();
	//drill6();
	//drill7_8();
	drill9_10_11();
}

static void sizeOfTypes()
{
	std::cout << "char: " << sizeof(char) << std::endl;
	std::cout << "int: " << sizeof(int) << std::endl;
	std::cout << "float: " << sizeof(float) << std::endl;
	std::cout << "double: " << sizeof(double) << std::endl;
	std::cout << "long long int: " << sizeof(long long int) << std::endl;
}

static void currencyConverter()
{
	char unit = ' ';
	int value;
	constexpr double yenToDollar = .0094;
	constexpr double kronerToDollar = .11;
	constexpr double poundsToDollar = 1.31;
	double answer;

	std::cout << "Please enter a value follwed by a unit ([y]en, [k]roner or [p]ounds)\n";
	std::cin >> value >> unit;

	switch (unit) {
		case 'y':
			answer = value * yenToDollar;
			break;
		case 'k':
			answer = value * kronerToDollar;
			break;
		case 'p':
			answer = value * poundsToDollar;
			break;
		default:
			std::cout << "Hey no cheating!";
			return;
	}

	std::cout << "That's $" << answer << ". Wow!";
	return;
}

static void charLooper()
{
	char currentLetter = 'a';
	char currentUppercase = 'A';
	for (int i = 0; i < 26; i++)
	{
		std::cout << currentLetter << "\t" << (int)currentLetter << "\t" << currentUppercase << "\t" << (int)currentUppercase << std::endl;
		currentLetter += 1;
		currentUppercase += 1;
	}
	return;
}

static void crappySquare()
{
	int num; 
	int answer = 0;

	std::cout << "gimme dat number: ";
	std::cin >> num;
	
	for (int i = 0; i < num; i++) {
		answer += num;
	}
	
	std::cout << "Your number: " << num << std::endl;
	std::cout << "Squared is: " << answer << std::endl;
	return;
}

static void bigBrotherCensor()
{
	std::vector<std::string> words;
	std::cout << "alright let's see dem words: ";
	
	// this takes in as many words as you want until you press Ctrl-Z or Ctrl-D on linux
	for (std::string temp; std::cin >> temp;)
		words.push_back(temp);
	std::cout << "Number of words: " << words.size() << std::endl;

	std::sort(words.begin(), words.end());

	for (int i = 0; i < words.size(); ++i)
		// this removes duplicates from sorted words (just looks back at the last one)
		if (i == 0 || words[i - 1] != words[i])
			if (words[i] == "sprouts") {
				std::cout << "BLEEEEPY\n";
			}
			else {
				std::cout << words[i] << "\n";
			}
	
	return;
}

// These drills are on page 126

static void drill1()
{
	std::cout << "Gimme 2 of dem numbers:\n";

	int val1, val2;
	while (std::cin >> val1 >> val2)
	{
		std::cout << val1 << '\t' << val2 << '\n';
	}

	return;
}

// compare ints
static void drill2_and_3()
{
	std::cout << "Gimme 2 of dem numbers:\n";

	int val1, val2;
	while (std::cin >> val1 >> val2)
	{
		if (val1 > val2) {
			std::cout << val1 << " is larger than " << val2 << std::endl;
		}
		else if (val2 > val1) {
			std::cout << val2 << " is larger than " << val1 << std::endl;
		}
		else {
			std::cout << val1 << " & " << val2 << " are probably equal\n";
		}
	}
	return;
}

// do the comparison with doubles
static void drill4()
{
	std::cout << "Gimme 2 of dem numbers:\n";

	double val1, val2;
	while (std::cin >> val1 >> val2)
	{
		if (val1 > val2) {
			std::cout << val1 << " is larger than " << val2 << std::endl;
		}
		else if (val2 > val1) {
			std::cout << val2 << " is larger than " << val1 << std::endl;
		}
		else {
			std::cout << val1 << " & " << val2 << " are probably equal\n";
		}
	}
	return;
}

// track almost =
static void drill5()
{
	std::cout << "Gimme 2 of dem numbers:\n";

	double val1, val2;
	while (std::cin >> val1 >> val2)
	{
		if (val1 > val2) {
			std::cout << val1 << " is larger than " << val2 << std::endl;
		}
		else if (val2 > val1) {
			std::cout << val2 << " is larger than " << val1 << std::endl;
		}
		else {
			std::cout << val1 << " & " << val2 << " are probably equal\n";
		}
		double diff = val1 - val2;
		if (diff > 0 && diff < 1.0 / 100 || diff < 0 && diff > -1.0 / 100) {
			std::cout << "The numbers are almost equal";
		}
	}
	return;
}

// track smallest and largest number
static void drill6()
{
	std::cout << "Gimme dat number:\n";

	double val = 0.0; 
	double largest = 0.0, smallest = 0.0;
	bool first = true;

	while (std::cin >> val)
	{
		if (first == true) {
			first = false;
			largest = val;
			smallest = val;
			std::cout << "since this is the first value it is both the largest and smallest value\n";
		} else if (val < smallest) {
			smallest = val;
			std::cout << val << " is the smallest so far\n";
		} else if (val > largest) {
			largest = val;
			std::cout << val << " is the largest so far\n";
		} else {
			std::cout << smallest << " remains the smallest & ";
			std::cout << largest << " remains the largest.\n";
		}
	}
	
	std::cout << "bye now";
	return;
}

// add units to the equation
static void drill7_8()
{
	std::cout << "Gimme dat number followed by a unit: (cm)(m)(ft)(in):\n";

	double val = 0.0;
	double largest = 0.0, smallest = 0.0;
	bool first = true;
	std::string unit = " ";

	while (std::cin >> val >> unit)
	{
		bool weGood = legalUnit(unit);
		// convert the unit to cm
		if (weGood == true) {
			val = convertUnitsToCm(unit, val);
			if (first == true) {
				first = false;
				largest = val;
				smallest = val;
				std::cout << "since this is the first value it is both the largest and smallest value\n";
			}
			else if (val < smallest) {
				smallest = val;
				std::cout << val << "cm is the smallest so far\n";
			}
			else if (val > largest) {
				largest = val;
				std::cout << val << "cm is the largest so far\n";
			}
			else {
				std::cout << smallest << "cm remains the smallest & ";
				std::cout << largest << "cm remains the largest.\n";
			}
		}
		else {
			std::cout << "don't give me crappy units\n";
		}
	}

	std::cout << "bye now";
	return;
}

// for drill 7-8
static bool legalUnit(std::string unit)
{
	const std::vector<std::string> legal_units{ "cm", "m", "in", "ft" };
	bool legal = false;
	// this is a range for loop. It looks at each legal_unit (ie element) in the legal_units vector and checks them against the "unit" string
	for (auto legal_unit : legal_units)
	{
		if (unit == legal_unit)
		{
			legal = true;
		}

	}
	return legal;
}

// also for drill7_8 & 9
static double convertUnitsToCm(std::string unit, double amount) 
{
	if (unit == "cm") {
		return amount;
	}
	else if (unit == "m") {
		return amount * 100;
	}
	else if (unit == "in") {
		return amount * 2.54;
	}
	else if (unit == "ft") {
		return (amount * 12) * 2.54;
	}
	else {
		std::cout << "something went horribly wrong with convertUnitsToCm";
		return amount * 666;
	}
}

// keep track of a sum too
static void drill9_10_11()
{
	std::cout << "Gimme dat number followed by a unit: (cm)(m)(ft)(in):\n";

	double val = 0.0;
	double largest = 0.0, smallest = 0.0;
	bool first = true;
	double sum = 0;
	std::string unit = " ";
	std::vector<double> entries;

	while (std::cin >> val >> unit)
	{
		bool weGood = legalUnit(unit);
		// convert the unit to cm
		if (weGood == true) {
			val = convertUnitsToCm(unit, val);
			if (first == true) {
				first = false;
				largest = val;
				smallest = val;
				std::cout << "since this is the first value it is both the largest and smallest value\n";
			}
			else if (val < smallest) {
				smallest = val;
				std::cout << val << "cm is the smallest so far\n";
			}
			else if (val > largest) {
				largest = val;
				std::cout << val << "cm is the largest so far\n";
			}
			else {
				std::cout << smallest << "cm remains the smallest & ";
				std::cout << largest << "cm remains the largest.\n";
			}
			entries.push_back(val);
			sum += val;
		}
		else {
			std::cout << "don't give me crappy units\n";
		}
	}
	std::sort(entries.begin(), entries.end());
	std::cout << "You entered: " << entries.size() << " values" << std::endl;
	std::cout << "The smallest value you entered was: " << smallest << std::endl;
	std::cout << "The largest value you entered was: " << largest << std::endl;
	std::cout << "Added together they equal " << sum << std::endl;
	std::cout << "Here is a sorted list of them: ";
	for (int i = 0; i < entries.size(); i++) {
		std::cout << "[" << entries[i] << "] ";
	}
	std::cout << std::endl << "bye now";
	return;
}