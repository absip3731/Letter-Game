#include<iostream>
using namespace std;
int main()
{
	char alphabet;
	cout << "Enter the Alphabet of Your Choice: ";
	cin >> alphabet;
	if (alphabet >= 'a' && alphabet <= 'z')
		alphabet = alphabet - 32;
	if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
		cout << "VOWEL!!!" << endl;
	else
		cout << "CONSONANT!!!" << endl;

	return 0;
}