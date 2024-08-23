#include<iostream>
using namespace std;
int main()
{
	char ch, start, end;
	cout << "Enter the Starting letter: ";
	cin >> start;
	cout << "Enter the Ending  letter: ";
	cin >> end;
	cout << "Enter the character you want to check: ";
	cin >> ch;
	if (start >= 'a' && start <='z')
		start = start  - 32;
	if (end >= 'a' && end <= 'z')
		end = end - 32;
	if (ch >= 'a' && ch <= 'z')
		ch = ch - 32;
	if (start >= end)
		cout << "Please Enter the Valid Range" << endl;
	else if (ch>=start &&   ch<=end)
		cout << "WINNER!!!";
	else
		cout << "LOSER!!! ";
	return 0;
}