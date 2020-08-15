#include "..\lib\std_lib_facilities.h"


static string WriteLetter(string first_name, string last_name, int mode) {
	if (mode == 0) {
		return "Why hello " + first_name + " " + last_name + "\n" + "Welcome to C++\n";
	} else {
		return "Dear " + first_name + " " + last_name + "\n" + "I am sorry you are not writing the code for this\n";
	}
}

void FormLetterMain() {
	string first_name, last_name;

	cout << "Enter your first name: ";
	cin >> first_name;

	cout << "Enter your last name: ";
	cin >> last_name;

	cout << WriteLetter(first_name, last_name, 0);

	cout << "\nNow enter the name of the person you would like to write to";
	cout << "\nEnter their first name: ";
	cin >> first_name;

	cout << "Enter their last name: ";
	cin >> last_name;

	cout << WriteLetter(first_name, last_name, 1);

	return;
}

