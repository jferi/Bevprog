#include "std_lib_facilities.h"

int main() 
{
	string first_name, friend_name;
	
	cout << "Enter the name of the person you want to write to.\n";
	
	cin >> first_name;
	
	cout << "Dear, " << first_name << endl;
	
	cout << "   How are you? I am fine. I miss you.\nI have been waiting living in Debrecen for some weeks by now.\nThe life here is quite acceptable. I am a university student now and i have to study a lot.\n" ;
	
	cout << "Please enter your friends name\n";
	
	cin >> friend_name;
	
	cout << "Have you seen " << friend_name << " lately?\n";
	
	char friend_sex = 0;
	
	cout << "Please enter your friends sex (m if male, f if female): \n";
	cin >> friend_sex;
	
	
	if (friend_sex == 'm')
	cout << "If you see " << friend_name << " please ask him to call me.\n";
	else if (friend_sex == 'f')
	cout << "If you see " << friend_name << " please ask her to call me.\n";
	else 
	cout << "Please enter a real sex.\n";
	
	int age = 0;
	
	cout << "Please enter an age: \n";
	cin >> age;
	
	
	if (age <= 0 || age >= 110)
	simple_error("you're kidding!");
	else 
	cout << "I heard you just had a birthday and you are " << age << " years old." << endl;
	
	if (age < 12)
	cout << "Next year you will be " << age+1 << endl;
	else if (age == 17)
	cout << "Next year you will be able to vote.\n";
	else if (age > 70)
	cout << "I hope you are enjoying retirement\n";
	
	cout << "Yours sincerely " << endl << endl;
	cout << " Juhász Ferenc.\n";
	
	
	
	return 0;
}