#include <iostream>
#include <vector>
#include <string>
// needed for sort
#include <algorithm>

// Presented are the drills and TryThis exercises from Chapter4

void sizeOfTypes(), currencyConverter(), charLooper(), crappySquare(), bigBrotherCensor();
void drill1(), drill2(), drill3(), drill4(), drill5(), drill6(), drill7(), drill8(), drill8(), drill10(), drill11();


void Chapter4Drills()
{
	//sizeOfTypes();
	//currencyConverter();
	//charLooper();
	//crappySquare();
	//bigBrotherCensor();
	drill1();
	//drill2();
	//drill3();
	//drill4();
	//drill5();
	//drill6();
	//drill7();
	//drill8();
	//drill9();
	//drill10();
	//drill11();
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
	return;
}

static void drill2()
{
	return;
}

static void drill3()
{
	return;
}

static void drill4()
{
	return;
}

static void drill5()
{
	return;
}

static void drill6()
{
	return;
}

static void drill7()
{
	return;
}

static void drill8()
{
	return;
}

static void drill9()
{
	return;
}

static void drill10()
{
	return;
}

static void drill11()
{
	return;
}
