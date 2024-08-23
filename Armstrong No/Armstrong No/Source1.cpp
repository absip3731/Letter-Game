#include<iostream>
using namespace std;
int num;
double result = 1;
int rem;

int main() {
	cout << "Enter the number=  ";
	cin >> num;
	while (num != 0)
	{
		rem = num % 10;
		result = result * 10 + rem;
		num = num / 10;

	}
	cout << "The reverse number is= " << result;

	return 0;
}
