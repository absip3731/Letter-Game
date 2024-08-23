#include<iostream>
using namespace std;
int main()
{
	int num;
	do
	{
		cout << "Enter a Number: ";
		cin >> num;
		if (num <= 0)
			cout << "INVALID INPUT!!" << endl;
	} while (num <= 0);
	for (int i = 1; i <= 10; i++)
		cout << num << "*" << i <<"="<< num * i << endl;
	return 0;
}