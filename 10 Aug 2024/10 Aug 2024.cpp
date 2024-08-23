#include<iostream>
using namespace std;
int num ,i;
void tableNumber();
void main()
{
	tableNumber();
}
void tableNumber()
{
	char choice;
	do
	{
		cout << "Enter 1 to start or Press X to exit: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			do
			{
				cout << "Enter a Number: ";
				cin >> num;
				if (num <= 0)
					cout << "INVALID INPUT!!" << endl;
			} while (num <= 0);
			cout << "TABLE OF A GIVEN NUMBER:" << endl;
			for (i = 1; i <= 10; i++)
				cout << num << " * " << i << " = " << num * i << endl;
			break;
		case'x':case'X':
			break;
		default:
			cout << "INVALID  INPUT!!" << endl;
		}
	} while (choice != 'x' && choice != 'X');
}