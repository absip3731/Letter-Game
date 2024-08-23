#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter the character: ";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		cout << "The Entered Character in UpperCase Letter is: " << ch << endl;
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
		cout << "The Entered Character in LowerCase Letter is: " << ch << endl;
	}
	else
		cout << "Please Enter the Character Ranging from A to Z or a to z" << endl;
	return 0;
}