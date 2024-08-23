#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cout << "Enter Your Name: ";
	getline(cin, name);
	cout << "The Name length: " << name.size() << endl;
	if (name[0] >= 'a' && name[0] <= 'z')
	{
		name[0] = name[0] - 32;
	}
		if (name[name.size() - 1] >= 'a' && name[name.size() - 1] <= 'z')
		{
			name[name.size() - 1] = name[name.size() - 1] - 32;
		}
		if (name[0] == 'A' || name[0] == 'E' || name[0] == 'I' || name[0] == 'O' || name[0] == 'U')
		{
			if (name[name.size() - 1] == 'A' || name[name.size() - 1] == 'E' || name[name.size() - 1] == 'I' || name[name.size() - 1] == 'O' || name[name.size() - 1] == 'U')
			{
				cout << "SELECTED!!" << endl;
			}
			else
			{
				cout << " NOT SELECTED!!" << endl;
			}
		}
	else
		cout << "NOT SELECTED!!!" << endl;
	return 0;
}