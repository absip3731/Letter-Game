#include<iostream>
using namespace std;
int main() {
	int n, result = 0;
	int rem, save;
	cout << "Enter the Number= ";
	cin >> n;

	while (n > 0)
	{
		rem = n % 10;
		result = result + (rem*rem*rem);
		n = n / 10;
	}
	cout << "Armstrong Number= " << result;

	return 0;
}