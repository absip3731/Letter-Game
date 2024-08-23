#include<iostream>
#include<string>
using namespace std;
int main()
{
	string myName;
	int myAge,subject1,subject2,subject3;
	int sum;
	float avg;
	cout << "Enter your name= ";
	getline(cin, myName);
	cout << "Enter your age= ";
	cin >> myAge;
	cout << "Enter your Marks of subject 1= ";
	cin >> subject1;
	cout << "Enter your Marks of subject 2= ";
	cin >> subject2;
	cout << "Enter your Marks of subject 3= ";
	cin >> subject3;
	sum = subject1 + subject2 + subject3;
	cout << "Total Marks= " << sum << endl;
	avg = sum / 3;
	cout << "Average= " << avg;
	return 0;

}