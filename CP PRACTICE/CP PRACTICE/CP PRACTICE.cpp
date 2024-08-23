#include<iostream>
using namespace std;

double kgTog(double kg) {
	return kg * 1000;
}
double gTokg(double g) {
	return g / 1000;
}
double kmTom(double km) {
	return km * 1000;
}
double mTokm(double m) {
	return m / 1000;
}
double mTocm(double m) {
	return m * 100;
}
double cmTom(double cm) {
	return cm / 100;
}

int main() {
	double input;
	int choice;

	cout << "Select Conversion" << endl;
	cout << "1.Kilogram to Grams" << endl;
	cout << "2.Gram to Kilogram" << endl;
	cout << "3.Kilometer to Meters" << endl;
	cout << "4.Meters to Kilometers" << endl;
	cout << "5.Meters to Centimeters" << endl;
	cout << "6.Centimeters to Meters" << endl;
	cout << "Enter your choice= ";
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "Enter the weight in Kilograms= ";
			cin >> input;
			cout << "Given weight in Grams= " << kgTog(input) << endl;
			break;
		case 2:
			cout << "Enter the weigth in Grams= ";
			cin >> input;
			cout << "Given weight in Kilograms= " << gTokg(input) << endl;
			break;
		case 3:
			cout << "Enter Length in Kilometer= ";
			cin >> input;
			cout << "Given length in Meters= " << kmTom(input) << endl;
			break;
		case 4:
			cout << "Enter length in Meters= ";
			cin >> input;
			cout << "Given length in Kilometers= " << mTokm(input) << endl;
			break;
		case 5:
			cout << "Enter length in Meters= ";
			cin >> input;
			cout << "Given Length in Centimeters= " << mTocm(input) << endl;
			break;
		case 6:
			cout << "Enter the length in Centimeters= ";
			cin >> input;
			cout << "Given length in Meters= " << cmTom(input) << endl;
			break;
		default:
			cout << "Ivalid input" << endl;
	}

	return 0;
}