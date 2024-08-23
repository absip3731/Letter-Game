#include<iostream>
using namespace std;
int main()
{
	char choice;
	do
	{
		int num;
		cout << "Enter 1 to start the Program and X to exit: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
		{
			int count = 0;
			do
			{
				cout << "Enter a Number: ";
				cin >> num;
				if (num <= 1)
					cout << "ENTER VALID NUMBER OR GREATER THAN 1" << endl;
			} while (num <= 1);
			for (int i = 1; i <= num; i++)
			{
				if (num % i == 0)
				{
					count++;
				}
			}
			if (count == 2)
				cout << "NUMBER IS PRIME!!" << endl;
			else
				cout << "NUMBER IS NOT PRIME" << endl;
			break;
		}
		case'x':case'X':
			break;
		default:
			cout << "INVALID INPUT!!" << endl;
		}
	} while (choice != 'x' && choice != 'X');
	return 0;
}