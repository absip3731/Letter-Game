#include<iostream>
using namespace std;
void vowelCheck();
void main()
{
	char choice;
	do
	{
		cout << "ENTER 1 TO START AND PRESS X TO EXIT: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			vowelCheck();
			break;
		case'x':case'X':
			break;
		default:
			cout << "INVALID IMPUT!!" << endl;
		}
	} while (choice != 'x' && choice != 'X');
}
void vowelCheck()
{
	char ch;
	cout << "ENTER ANY ALPHABET: ";
	cin >> ch;
	switch (ch)
	{
	case'a':case'A':case'o':case'O':case'e':case'E':case'i':case'I':case'u':case'U':
		cout << "VOWEL!!" << endl;
		break;
	default:
		cout << "NOT A VOWEL!!" << endl;
	}
}