#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter any Alphabet of your choice: ";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
		cout << "YOU HAVE ENTERED LOWERCASE LETTER" << endl;
	if (ch >= 'A' && ch <= 'Z')
		cout << "YOU HAVE ENTERED UPPERCASE LETTER" << endl;
	else
		cout << "Please Enter the Alphabets ranging from A to Z" << endl;
	return 0;
}