#include<iostream>
using namespace std;
int main()
{
	char choice;
	do
	{
		cout << "Enter 1 to Start or Press X to exit: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			float marks1, marks2, marks3, avg, yourMarks, percent;
			do
			{
				cout << "Enter the Marks of First Subject(0-100): ";
				cin >> marks1;
				if (marks1 < 0 || marks1 > 100)
					cout << "INVALID INPUT!!" << endl;
			}while (marks1 < 0 || marks1 > 100);
			do
			{
				cout << "Enter the Marks of Second Subject(0-100): ";
				cin >> marks2;
				if (marks2 < 0 || marks2 > 100)
					cout << "INVALID INPUT!!" << endl;
			} while(marks2 < 0 || marks2 > 100);
			do
			{ 
				cout << "Enter the Marks of Third Subject(0-100): ";
				cin >> marks3;
				if(marks3 < 0 || marks3 > 100)
					cout << "INVALID INPUT!!" << endl;
			} while (marks3 < 0 || marks3 > 100);
			yourMarks = marks1 + marks2 + marks3;
			avg = yourMarks / 3;
			percent = (yourMarks / 300) * 100;
			cout << "YOUR TOTAL MARKS ARE: " << yourMarks << endl;
			cout << "AVERAGE: " << avg << endl;
			cout << "PERCENTAGE: " << percent << "%"<<endl;
			if (percent == 100 && percent >= 85)
				cout << "A Grade" << endl;
			else if (percent < 85 && percent >= 80)
				cout << "A- Grade" << endl;
			else if (percent < 80 && percent >= 75)
				cout << "B+ Grade" << endl;
			else if (percent < 75 && percent >= 70)
				cout << "B Grade" << endl;
			else if (percent < 70 && percent >= 65)
				cout << "C+ Grade" << endl;
			else if (percent < 65 && percent >= 60)
				cout << "C Garde" << endl;
			else if (percent < 60 && percent >= 55)
				cout << "D+ Grade" << endl;
			else if (percent < 55 && percent >= 50)
				cout << "D Grade" << endl;
			else if (percent < 50 && percent >= 0)
				cout << "F Grade" << endl;
			else
				cout << "ENTER VALID MARKS" << endl;
			break;
		case'x':case'X':
			break;
		default:
			cout << "INVALID INPUT!!" << endl;
		}
	}while (choice != 'x' && choice != 'X');
	return 0;
}