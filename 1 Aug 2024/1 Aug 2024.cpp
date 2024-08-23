#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a Number: ";
	cin >> num;
	if (num <= 0)
	{
		cout << "INVALID INPUT!!" << endl;
	}
	else
	{
		if (num % 2 == 0)
		{
			cout << "FIVE MULTIPLES OF A GIVEN NUMBER ARE:" << endl;
			cout << num << "*" << "1" << "=" << num * 1 << endl;
			cout << num << "*" << "2" << "=" << num * 2 << endl;
			cout << num << "*" << "3" << "=" << num * 3 << endl;
			cout << num << "*" << "4" << "=" << num * 4 << endl;
			cout << num << "*" << "5" << "=" << num * 5 << endl;
		}
		else if (num % 2 != 0 && num % 3 == 0)
		{
			cout << "SQUARE: " << num * num << endl;
		}
		else if (num % 2 != 0 && num % 3 != 0)
		{
			cout << "CUBE: " << num * num * num << endl;
		}
	}
	return 0;
}