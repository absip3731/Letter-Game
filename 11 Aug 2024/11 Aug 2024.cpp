#include<iostream>
using namespace std;
int pin, currentBalance=0;
void atmMachine();
void main()
{
	char choice;
	do
	{
		cout << "\nENTER 1 TO START OR PRESS X TO EXIT: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			atmMachine();
			break;
		case'x':case'X':
			break;
		default:
			cout << "\nINVALID INPUT!!" << endl;
		}
	} while (choice != 'x' && choice != 'X');
}
void atmMachine()
{
	int withdrawal, depositAmount;
	char choice2;
	do
	{
		cout << "\nEnter Your PIN for ATM(in Digits): ";
		cin >> pin;
		if (pin != 3731)
			cout << "\nINVALID INPUT!!" << endl;
		else
		{
			do
			{
			cout << "\nYOUR CURRENT BALANCE IS: " << currentBalance << endl;
			cout << "ENTER 2 FOR DEPOSIT SECTION." << endl;
			cout << "ENTER 3 FOR FOR TRANSACTION." << endl;
			cout << "ENTER 4 TO FOR CURRENT BALANCE." << endl;
			cout << "PRESS N TO EXIT FROM ATM" << endl;
			cin >> choice2;
			switch(choice2)
				{
				case'2':
					do
					{
						cout << "\nENTER THE DEPOSITED AMOUNT: ";
						cin >> depositAmount;
						if (depositAmount <= 0)
							cout << "\nPLEASE ENTER VALID AMMOUNT" << endl;
						else
							currentBalance += depositAmount;
						cout << "\nAMMOUNT DEPOSITED SUCCESSFULLY.....YOUR CURRENT BALANCE IS: " << currentBalance << endl;
						cout << "\n........THANK YOU FOR USING HBL........" << endl;
					} while (depositAmount <= 0);
					break;
				case'3':
					do
					{
						cout << "\nENTER THE TRANSACTION AMMOUNT: ";
						cin >> withdrawal;
						if (withdrawal<=0 || withdrawal>currentBalance)
							cout << "\nPLEASE ENTER VALID AMMOUNT" << endl;
						else
						{
							currentBalance -= withdrawal;
							cout << "AMOUNT WITHDRAWAL SUCCESSFULLY.....YOUR CURRENT BALANCE IS: " << currentBalance << endl;
							cout << "\n........THANK YOU FOR USING HBL........" << endl;
							break;
						}
					} while (withdrawal <= 0 || withdrawal > currentBalance);
					break;
				case'4':
					cout << "\nYOUR CURRENT BALANCE: " << currentBalance << endl;
					cout << "\n........THANK YOU FOR USING HBL........" << endl;
					break;
				case'n':case'N':
					break;
				default:
					cout << "INVALID INPUT!!" << endl;
				}
			} while (choice2 != 'n' && choice2 != 'N');
		}
	} while (pin != 3731);
}