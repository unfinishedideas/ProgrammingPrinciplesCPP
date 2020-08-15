#include "..\lib\std_lib_facilities.h"


static string WriteLetter(string first_name, string last_name, int mode, char sex) {
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

void FormLetterMain() {
	string first_name, last_name;
	char sex = 0;

	cout << "Enter your first name: ";
	cin >> first_name;

	cout << "Enter your last name: ";
	cin >> last_name;

	cout << WriteLetter(first_name, last_name, 0, sex);

	cout << "\nNow enter the name of the person you would like to write to";
	cout << "\nEnter their first name: ";
	cin >> first_name;

	cout << "Enter their last name: ";
	cin >> last_name;

	cout << WriteLetter(first_name, last_name, 1, sex);

	cout << "\nNow we care about your friend's sex I guess...\nWhat's in your friends pants...? [m/f]";
	cin >> sex;

	cout << WriteLetter(first_name, last_name, 2, sex);

	return;
}

