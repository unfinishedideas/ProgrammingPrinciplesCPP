#include <iostream>
#include <vector>
#include <string>
// needed for sort
#include <algorithm>
#include<stdexcept>

void drill1(), drill2(), drill3(), drill4(), drill5(), drill6(), drill7(), drill8(), drill9(), drill10(), drill11(), drill12(), drill13(), drill14();
void tryThis();
int area(int length, int width); 
int f(int x, int y, int z);
void logError(std::string);
int framed_area(int x, int y);
void simpleError(std::string s);
void calculateTemps();
int errorsTime();

// drills stuff
double ctok(double c);
double ctokWithCheck(double c);

class Bad_area {};

void Chapter5Drills()
{
	//errorsTime();

	//drill1();
	//drill2();
	//drill3();
	drill4();
	//drill5();
	//drill6();
	//drill7();
	//drill8();
	//drill9();
	//drill10();
	//drill11();
	//drill12();
	//drill13();
	//drill14();

	//tryThis();
	return;
}

void tryThis()
{
	// try out the compiler errors on p 137
	//int s1 = area(7;
	//int s2 = area(7)
	//Int s3 = area(7);
	//int s4 = area('7);
	
	//int x0 = arena(7);
	//int x1 = area(7);
	//int x2 = area("seven", 2);

	//int x4 = area(10, -7);
	//int x5 = area(10.7, 9.3);
	//char x6 = area(100, 9999);
	//std::cout << "x4" << x4 << std::endl;
	//std::cout << "x5" << x5 << std::endl;
	//std::cout << "x6" << x6 << std::endl;

	//f(1, 1, -1);

	//try {
	//	int x = -1;
	//	int y = 2;
	//	int z = 4;
	//	int area1 = area(x, y);
	//	int area2 = framed_area(1, z);
	//	int area3 = framed_area(y, z);
	//	double ratio = area1 / area3;
	//}
	//catch (Bad_area) {
	//	std::cout << "Oops! Had bad arguments to area()!\n";
	//}

	//double d = 0;
	//std::cout << "gimme double";
	//std::cin >> d;
	//if (std::cin) {
	//	std::cout << "thanks for the double?\n" << typeid(d).name() << std::endl;
	//}
	//else {
	//	std::cout << "where's my double?\n" << typeid(d).name() << std::endl;
	//}

	//calculateTemps();  //p.156

	// try this p.167: values that work with the preconditon (length and width positive) but fail post condition (returns a positive value that is the area)
	// anything that will overload the returning int :)   9999999999 x 9999999999

	return;
}

int area(int length, int width)
{
	if (length <= 0 || width <= 0) {
		throw Bad_area{};
	}
	return length * width;
}

int framed_area(int x, int y)
{
	constexpr int frame_width = 2;
	if (x - frame_width <= 0 || y - frame_width <= 0) {
		logError("non-positive area() argumentcalled by framed_area()");
	}
	return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z)
{
	int area1 = area(x, y);
	if (area1 <= 0) {
		logError("non-positive area");
	}
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);
	double ratio = double(area1) / area3;
	return 1;
}

void logError(std::string message)
{
	std::cout << "ERR: " << message << std::endl;
}

void simpleError(std::string s)
{
	throw std::runtime_error(s);
}

void calculateTemps()
{
	double sum = 0;
	// initialize these to impossibly high and low to prevent bad output
	double high_temp = -10000;
	double low_temp = 10000;
	int no_of_temps = 0;

	for (double temp; std::cin >> temp;) {
		++no_of_temps;
		sum += temp;
		if (temp > high_temp) high_temp = temp;
		if (temp < low_temp) low_temp = temp;
	}

	std::cout << "High temp: " << high_temp << std::endl;
	std::cout << "Low temp: " << low_temp << std::endl;
	std::cout << "Average temp: " << sum / no_of_temps << std::endl;
} 

// Below are 25 code fragments. Each is meant to be inserted into this scaffolding. p.168
//int errorScaffolding()
//{
//	try {
//		// your code here
//		std::cin.get();
//		return 0;
//	}
//	catch (std::exception& e) {
//		std::cerr << "error: " << e.what() << '\n';
//		std::cin.get();
//		return 1;
//	}
//	catch (...) {
//		std::cerr << "Oops: unknown exception!\n";
//		std::cin.get();
//		return 2;
//	}
//}

int errorsTime()
{
	try {
		//// 1
		//std::Cout << "Success!\n";
		//// 2
		//std::cout << "Success!\n;
		//// 3
		//std::cout << "Success" << !\n"
		//// 4
		//std::cout << success << '\n';
		//// 5
		//std::string res = 7; 
		//std::vector<int> v(10);
		//v[5] = res;
		//std::cout << "Success!\n";
		//// 6
		//std::vector<int> v(10);
		//v(5) = 7;
		//if (v(5) != 7) std::cout << "Success!\n";
		//// 7
		//
		//// 8
		//
		//// 9
		//
		//// 10
		//
		//// 11
		//
		//// 12
		//
		//// 13
		//
		//// 14
		//
		//// 15
		//
		//// 16
		//
		//// 17
		//
		//// 18
		//
		//// 19
		//
		//// 20
		//
		//// 21
		//
		//// 22
		//
		//// 23
		//
		//// 24
		//
		//// 25
		
		std::cin.get();
		return 0;
	}
	catch (std::exception& e) {
		std::cerr << "error: " << e.what() << '\n';
		std::cin.get();
		return 1;
	}
	catch (...) {
		std::cerr << "Oops: unknown exception!\n";
		std::cin.get();
		return 2;
	}
}

void drill1()
{
	std::cout << "drill 1: Try this exercises" << std::endl;
	tryThis();
	return;
}

void drill2()
{
	std::cout << "drill 2" << std::endl << "enter double: ";
	//The broken code they give you
	//double c = 0;
	//std::cin >> d;
	//double k = ctok("c");
	//Cout << k << '/n';	

	double c;
	std::cin >> c;
	double k = ctok(c);
	std::cout << k << '/n';
	return;
}

double ctok(double c)
{
	// the error prone version it gives
	//int k = c + 273.13;
	//return int;	

	double k = c + 273.13;
	return k;
}

void drill3()
{
	std::cout << "drill 3" << std::endl << "enter double: ";
	// add in a check to prevent values under -273.15c
	double c;
	try {
		std::cin >> c;
		if (c <= -273.15) {
			throw c;
		}
		double k = ctok(c);
		std::cout << k << '/n';
	}
	catch (double e) {
		std::cerr << "You entered " << e << " a value under -273.15... aka ABSOLUTE ZERO YOU CLAUDE!";
	}
	return;
}

void drill4()
{
	// put the check inside of ctok instead
	std::cout << "drill 4" << std::endl << "Enter a double: ";
	try {
		double c;
		std::cin >> c;
		double k = ctokWithCheck(c);
		std::cout << k << '/n';
	}
	catch (double e){
		std::cerr << e << " is too low a value!";
	}
	return;
}

double ctokWithCheck(double c)
{	
	if (c <= -273.15) {
		throw c;
	}
	double k = c + 273.13;
	return k;
}

void drill5()
{
	std::cout << "drill 5" << std::endl;
	return;
}

void drill6()
{
	std::cout << "drill 6" << std::endl;
	return;
}

void drill7()
{
	std::cout << "drill 7" << std::endl;
	return;
}

void drill8()
{
	std::cout << "drill 8" << std::endl;
	return;
}

void drill9()
{
	std::cout << "drill 9" << std::endl;
	return;
}

void drill10()
{
	std::cout << "drill 10" << std::endl;
	return;
}

void drill11()
{
	std::cout << "drill 11" << std::endl;
	return;
}

void drill12()
{
	std::cout << "drill 12" << std::endl;
	return;
}

void drill13()
{
	std::cout << "drill 13" << std::endl;
	return;
}

void drill14()
{
	std::cout << "drill 14" << std::endl;
	return;
}
