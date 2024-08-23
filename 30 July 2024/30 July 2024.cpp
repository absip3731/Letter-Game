#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	switch (ch)
	{
	case'A':case'a':case'E':case'e':case'I':case'i':case'O':case'o':case'U':case'u':
		cout << "VOWEL!!" << endl;
		break;
	default:
		cout << "NOT A VOWEL!!" << endl;
		break;
	}
	return 0;
}