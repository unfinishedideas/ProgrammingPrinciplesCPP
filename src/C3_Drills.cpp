#include "..\lib\std_lib_facilities.h"

// Authors note... I hate this. haha

static string WriteLetter(string first_name, string last_name, int mode, char sex) 
{
	if (mode == 0) {
		return "Why hello " + first_name + " " + last_name + "\n" + "Welcome to C++\n";
	} else if (mode == 1) {
		return "Dear " + first_name + " " + last_name + "\n" + "I am sorry you are not writing the code for this\n";
	} else {
		string pantsString;
		if (sex == 'f') {
			pantsString = "her";
		}
		else if (sex == 'm') {
			pantsString = "him";
		}
		else {
			pantsString = "GLORAGAX";
		}
		return "Your friends name is:" + first_name + " " + last_name + "\nCould you tell " + pantsString + " to call me?";
	}
}

static bool oddOrEven(int testNum)
{
	if (testNum % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

static void AgeDrill(int age) 
{
	if (age <= 0 || age > 120) {
		simple_error("Yeah you're a fookin liar!");
	}
	else if (age < 12) {
		cout << "Next year you will be " << age++;
		cout << "\nThis is a test.. what's age now? --->" << age;
	}
	else if (age == 17) {
		cout << "Next year you will be able to vote... please commit voter fraud so you can help vote this cheeto in chief out...";
	}
	else if (age > 70) {
		cout << "I hope you were allowed to retire...";
	}
	else {
		cout << "You must be between 12 and 70 and not 17...";
	}
	return;
}

static void MilesToKm() 
{
	int miles;
	float km;

	cout << "How many miles do you have: ";
	cin >> miles;

	km = miles * 1.609;

	cout << "\n" << miles << " miles is actually " << km << " km. Yaay";

	return;
}

static void NumberSequencer() 
{
	int a, b, c;
	int arr[3];
	// Eeeehhhhhhh.. too lazy.
}

static void WhatYourCoinsDoing(int halfDollars, int quarters, int dimes, int nickles, int pennies)
{
	int totalCents = (halfDollars * 50) + (quarters * 25) + (dimes * 10) + (nickles * 5) + pennies;
	cout << "\n you have: " << totalCents << "c" << std::endl;
	int dollarsFloat = totalCents / 100;
	cout << "which is: $" << dollarsFloat;
}

void Chapter3Drills()
{
	int halfDollars, quarters, dimes, nickles, pennies;
	cout << "enter your coints\n" << "half dollas: ";
	cin >> halfDollars;
	cout << "\nquarts: ";
	cin >> quarters;
	cout << "\ndims: ";
	cin >> dimes;
	cout << "\nnicks: ";
	cin >> nickles;
	cout << "\npenises: ";
	cin >> pennies;
	WhatYourCoinsDoing(halfDollars, quarters, dimes, nickles, pennies);

	//string first_name, last_name;
	//char sex;
	//int age;

	//cout << "Enter your first name: ";
	//cin >> first_name;

	//cout << "Enter your last name: ";
	//cin >> last_name;

	/*cout << WriteLetter(first_name, last_name, 0, sex);

	cout << "\nNow enter the name of the person you would like to write to";
	cout << "\nEnter their first name: ";
	cin >> first_name;

	cout << "Enter their last name: ";
	cin >> last_name;

	cout << WriteLetter(first_name, last_name, 1, sex);

	cout << "\nNow we care about your friend's sex I guess...\nWhat's in your friends pants...? [m/f]";
	cin >> sex;

	cout << WriteLetter(first_name, last_name, 2, sex);*/

	//cout << "alright we're gonna need to know how old you are now... Gonna need an INT! ";
	//cin >> age;

	//AgeDrill(age);

	//MilesToKm();
	NumberSequencer();

	return;
}

