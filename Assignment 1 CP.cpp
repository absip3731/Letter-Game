#include<iostream>
using namespace std;
int main()
{
	float degree, radian, cubic_meter, liter;
	int hours, seconds;

	cout << "Enter the measurement of radian= ";
	cin >> radian;
	degree = radian * 57.2;
	cout << "The value in Degrees= " << degree << endl;

	cout << "Enter the Number of hours= ";
	cin >> hours;
	seconds = hours * 60 * 60;
	cout << "The Numbers of seconds are= " << seconds << endl;

	cout << "Enter the measurement  in cubic meter= ";
	cin >> cubic_meter;
	liter = cubic_meter * 1000;
	cout << "The measurement in liters are= " << liter << endl;

	return 0;
}