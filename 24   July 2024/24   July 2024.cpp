#include<iostream>
using namespace std;
int main()
{
	char start, end , alphabet;
	cout << "Enter the Starting Range: ";
	cin >> start;
	cout << "Enter the Ending Range: ";
	cin >> end;
	cout << "Enter the Character you want to check: ";
	cin >> alphabet;
	if (start >= 'a' && start <= 'z')
		start = start - 32;
	if (end >= 'a' && end <= 'z')
		end = end - 32;
	if (alphabet >= 'a' && alphabet <= 'z')
		alphabet = alphabet - 32;
	if (start >= end)
		cout << "Please Enter the Valid Range" << endl;
	else if (alphabet >= start && alphabet <= end)
		cout << "WINNER!!!" << endl;
	else
		cout << "LOSER!!!" << endl;
	return 0;
}