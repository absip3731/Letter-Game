#include<iostream>
using namespace std;
int main()
{
	char ch1, ch2;
	cout << "Enter the First Character: ";
	cin >> ch1;
	cout << "Enter the Second Character: ";
	cin >> ch2;
	if (ch1 >= 'a' && ch1 <= 'z')
	{
		ch1 = ch1 - 32;
	}
	if (ch2 >= 'a' && ch2 <='z')
	{
		ch2 = ch2 - 32;
	}
	if (ch1 > ch2)
	{
		cout << ch1 << " COMES AFTER " << ch2 << endl;
	}
	else if (ch1 < ch2)
	{
		cout << ch1 << " COMES BEFORE " << ch2 << endl;
	}
	else
	{
		cout << "BOTH HAVE SAME ORDER" << endl;
	}
	return 0;
}