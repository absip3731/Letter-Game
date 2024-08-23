#include<iostream>
using namespace std;
int main()
{
	int num, start, end;
	do
	{
		cout << "Enter the Number of Table You Want: ";
		cin >> num;
		if (num <= 0)
			cout << "INVALID INPUT!!" << endl;
	} while (num <= 0);
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
		if (end <= 0 || end < start)
			cout << "INVALID INPUT!!" << endl;
	} while (end <= 0 || end < start);
	for (start; start <= end; start++)
		cout << num << "*" << start << "=" << num*start << endl;
	return 0;
}