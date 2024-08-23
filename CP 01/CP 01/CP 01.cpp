#include<iostream>
using namespace std;
int main() {
	double n1, n2, result = 1;
	cout << "Enter the base number= ";
	cin >> n1;
	cout << "Enter the exponent number= ";
	cin >> n2;

	for (int i = 1; i <= n2; i++) {
		result = result * n1;
	}
	cout << "Power is= " << result << endl;

	return 0;
}


