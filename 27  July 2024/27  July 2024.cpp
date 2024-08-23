#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter any type of Character of your choice: ";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
		cout << "LOWERCASE LETTER" << endl;
	else if (ch >= 'A' && ch <= 'Z')
		cout << "UPPERCASE LETTER" << endl;
	else if (ch >= '0' && ch <= '9')
		cout << "DIGIT" << endl;
	else
		cout << "SPECIAL CHARACTER" << endl;
		return 0;
}