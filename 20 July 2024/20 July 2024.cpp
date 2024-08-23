#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int birthYear, currentYear, age;
	cout << "Enter the Name= ";
	getline(cin, name);
	cout << "Enter your Birth year= ";
	cin >> birthYear;
	cout << "Enter the Current year= ";
	cin >> currentYear;
	age = currentYear - birthYear;
	cout << "Your current age is= " << age;
	return 0;
}