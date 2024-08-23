#include<iostream>
using namespace std;

double add(double num1, double num2) {
	return num1 + num2;
}
double sub(double num1, double num2) {
	return num1 - num2;
}
int main() {
	double num1, num2;
	int choice;

	cout << "Enter the First Number= ";
	cin >> num1;
	cout << "Enter the second Number= ";
	cin >> num2;

	cout << "Select Operation" << endl;
	cout << "1.Addition" << endl;
	cout << "2.Subtraction" << endl;
	cout << "Enter your choice= ";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Addition= " << add(num1, num2);
		break;
	case 2:
		cout << "Subtraction= " << sub(num1, num2);
		break;
	default:
		cout << "Invalid input";
	}
	return 0;
}