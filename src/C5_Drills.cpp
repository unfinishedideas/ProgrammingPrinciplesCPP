//#include <iostream>
//#include <vector>
//#include <string>
//// needed for sort
//#include <algorithm>
#include "Drills.h"

static void drill_5_1(), drill_5_2(), drill_5_3(), drill_5_4(), drill_5_5(), drill_5_6(), drill_5_7(), drill_5_8(), drill_5_9(), drill_5_10(), drill_5_11(), drill_5_12(), drill_5_13(), drill_5_14();
void tryThis();
int area(int length, int width); 
int f(int x, int y, int z);
int framed_area(int x, int y);


void Chapter5Drills()
{
	//drill_5_1();
	//drill_5_2();
	//drill_5_3();
	//drill_5_4();
	//drill_5_5();
	//drill_5_6();
	//drill_5_7();
	//drill_5_8();
	//drill_5_9();
	//drill_5_10();
	//drill_5_11();
	//drill_5_12();
	//drill_5_13();
	//drill_5_14();

	tryThis();
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

	f(1, 1, 1);
	f(-1, 1, 1);
	f(1, -1, 1);

	return;
}

int area(int length, int width)
{
	if (length <= 0 || width <= 0) {
		error("negative values in area()");
	}
	return length * width;
}

int framed_area(int x, int y)
{
	constexpr int frame_width = 2;
	if (x - frame_width <= 0 || y - frame_width <= 0) {
		error("non-positive area() argumentcalled by framed_area()");
	}
	return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z)
{
	int area1 = area(x, y);
	if (area1 <= 0) {
		error("non-positive area");
	}
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);
	double ratio = double(area1) / area3;
	return 1;
}

static void drill_5_1()
{
	std::cout << "drill_5_1" << std::endl;
	return;
}

static void drill_5_2()
{
	std::cout << "drill_5_2" << std::endl;
	return;
}

static void drill_5_3()
{
	std::cout << "drill_5_3" << std::endl;
	return;
}

static void drill_5_4()
{
	std::cout << "drill_5_4" << std::endl;
	return;
}

static void drill_5_5()
{
	std::cout << "drill_5_5" << std::endl;
	return;
}

static void drill_5_6()
{
	std::cout << "drill_5_6" << std::endl;
	return;
}

static void drill_5_7()
{
	std::cout << "drill_5_7" << std::endl;
	return;
}

static void drill_5_8()
{
	std::cout << "drill_5_8" << std::endl;
	return;
}

static void drill_5_9()
{
	std::cout << "drill_5_9" << std::endl;
	return;
}

static void drill_5_10()
{
	std::cout << "drill_5_10" << std::endl;
	return;
}

static void drill_5_11()
{
	std::cout << "drill_5_11" << std::endl;
	return;
}

static void drill_5_12()
{
	std::cout << "drill_5_12" << std::endl;
	return;
}

static void drill_5_13()
{
	std::cout << "drill_5_13" << std::endl;
	return;
}

static void drill_5_14()
{
	std::cout << "drill_5_14" << std::endl;
	return;
}
