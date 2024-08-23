/*
Faizan Ali 01-131222-017
Aizaz Ahmed 01-131232-106
Muhammad Abdullah Sarwar 01-131232-049
*/
#include<iostream> 
using namespace std;
int main()
{
	int number;
	int index;
	cout << "\nEnter a Number between (3-20): ";
	cin >> number;
	while (!(number >= 3 && number <= 20))
	{
		cout << "\n Enter a Number Again..";
		cin >> number;
	}
	while (number >= 2)
	{
		index = 1;
		cout << "\n The Table of " << number;
		while (index <= 10)
		{
			cout << "\n" << number << "\t*\t" << index << "\t=\t" << number * index;
			index++;
		}
		number = number - 2;
	}
	return 0;
}
