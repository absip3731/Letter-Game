#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Enter The Marks: ";
	cin >> marks;
	if (marks <= 100 && marks >= 80)
		cout << "You have got A garde" << endl;
	else if (marks < 80 && marks >= 60)
		cout << "You have got B garde" << endl;
	else if (marks < 60 && marks >= 40)
		cout << "You have got C grade" << endl;
	else if (marks < 40 && marks >= 20)
		cout << "You have got D grade" << endl;
	else if (marks < 20 && marks >= 0)
		cout << "You have got F grade" << endl;
	else
		cout << "Please Enter the Valid Marks" << endl;
	return 0;
}
