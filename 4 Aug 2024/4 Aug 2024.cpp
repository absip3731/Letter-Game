#include<iostream>
using namespace std;
int main()
{
	int start, end, sum;
	char choice;
	do
	{
		cout << "Enter 1 to start the program or Press x to exit: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			sum = 0;
			do
			{
				cout << "Enter the Starting Range: ";
				cin >> start;
				if (start <= 0)
					cout << "INVALID INPUT!!" << endl;
			} while (start <= 0);
			do
			{
				cout << "Enter the Ending Range: ";
				cin >> end;
				if (end <= 0 || start>=end)
					cout << "INVALID INPUT!!" << endl;
			} while (end <= 0 || start>=end);
			if (start % 2 != 0)
			{
				start++;
			}
			for (start; start <= end; start += 2)
			{
				sum = sum + start;
			}
			cout << "SUM OF EVEN NUMBERS: " << sum << endl;
			break;
		case'x':case'X':
			break;
		default:
			cout << "INVALID CHOICE ENTERED" << endl;
		}
	} while (choice != 'x' && choice != 'X');
			return 0;
}