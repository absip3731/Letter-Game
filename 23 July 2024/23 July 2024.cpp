#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the Number: ";
	cin >> num;
	cout << "The Number you entered: " << num << endl;
	if (!(num >0))
		cout << "The Number is Negative" << endl;
	else
		cout << "The Number is Positive" << endl;
	return 0;
}