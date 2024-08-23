#include<iostream>
using namespace std;
char choice;
char op;
void rightPyramid();
void invertedPyramid();
void main()
{ 
	do 
	{
		cout << "ENTER 1 TO START OR PRESS X TO EXIT: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			do
			{
				cout << "ENTER 2 TO DISPLAY RIGHT PYRAMID." << endl;
				cout << "ENTER 3 TO DISPLAY LEFT PYRAMID." << endl;
				cout << "PRESS N OR n  TO EXIT." << endl;
				cin >> op;
				if (op == '2')
					rightPyramid();
				if (op == '3')
					invertedPyramid();
			} while (op !='n' && op!='N');
		case'x':case'X':
			break;
		default:
			cout << "INVALID INPUT!!" << endl;
		}
	} while (choice != 'x' && choice != 'X');
}
void rightPyramid()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void invertedPyramid()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 10; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}