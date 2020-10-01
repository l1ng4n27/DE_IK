#include "std_lib_facilities.h"

int main(){
	
	cout << "Please enter your first name, followed by an 'enter': ";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";
	cout << "Enter the name of the person you want to write to: ";
	string name;
	cin >> name;
	cout << "Dear, " << name << "!\n";
	cout << "How are you? I am fine. I miss you.\n";
	cout << "Please enter a friends name, followed by an enter, again: ";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen "<<friend_name <<" lately?\n";
	cout << "Please enter m, if your friend is male, and f, if female.\n";
	string friend_sex;
	cin >> friend_sex;
	if (friend_sex == "m")
		cout << "If you see " <<friend_name<<", please ask him to call me.\n";
	else
		cout << "If you see " <<friend_name<<", please ask her to call me.\n";
	cout << "Please, tell me how old your friend is.\n";
	int age;
	cin >> age;
	if (age>110 or age<0)
		simple_error("You're kidding!\n");
	else
		cout <<"I hear you just had your birthday and you are " << age << " years old.\n";
		if (age<12)
			cout << "Next year you will be" << age+1 <<".\n";
		else if (age==17)
			cout << "Next year you will be able to vote.\n";
		else if (age>70)
			cout << "I hope you're enjoying retirement.\n";
	cout << "Yours sincerely,\nFerenc Bodnár\n";
}