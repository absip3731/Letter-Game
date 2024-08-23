#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Enter the Marks: ";
	cin >> marks;
	cout << "The Marks you entered are: " <<marks<< endl;
	if (marks <= 100 && marks >= 80)
		cout << "You have got A grade" << endl;
	else if (marks < 80 && marks >= 60)
		cout << "You have got B grade" << endl;
	else if (marks < 60 && marks >= 40)
		cout << "You have got C grade" << endl;
	else if (marks < 40 && marks >= 0)
		cout << "You have got F grade" << endl;
	else
		cout << "Please Enter the correct Marks" << endl;
	return 0;
}