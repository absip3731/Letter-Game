#include<iostream>
using namespace std;
int main()
{
	int num;
	char choice;
	do
	{
		cout << "ENTER 1 TO START OR PRESS X TO EXIT: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			do
			{
				cout << "Enter the Number: ";
				cin >> num;
				if (num <= 0)
					cout << "INVALID INPUT!!" << endl;
			} while (num <= 0);
			while (num >= 1)
			{
				int x = num;
				while (x >= 1)
				{
					cout << x << endl;
					x--;
				}
				num--;
				cout << endl;
			}
			break;
		case'x':case'X':
			break;
		default:
			cout << "INVALID INPUT!!" << endl;
		}
	} while (choice != 'x' && choice != 'X');
	return 0;
}