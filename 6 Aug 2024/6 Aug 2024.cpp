#include<iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        int start, end;
        cout << "ENTER 1 TO START OR PRESS X TO EXIT: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
        {
            do
            {
                cout << "ENTER THE STARTING RANGE: ";
                cin >> start;
                if (start <= 1)
                    cout << "PLEASE ENTER A VALID NUMBER GREATER THAN 1" << endl;
            } while (start <= 1);

            do
            {
                cout << "ENTER THE ENDING RANGE: ";
                cin >> end;
                if (end <= 1 || end <= start)
                    cout << "PLEASE ENTER A VALID NUMBER GREATER THAN " << start << endl;
            } while (end <= 1 || end <= start);

            cout << "PRIME NUMBERS IN THIS RANGE ARE: ";
            for (int num = start; num <= end; num++)
            {
                int count = 0;
                for (int i = 2; i <= num / 2; i++)
                {
                    if (num % i == 0)
                    {
                        count++;
                        break;
                    }
                }
                if (count == 0 && num > 1)
                {
                    cout << num << " ";
                }
            }
            cout << endl;
            break;
        }
        case 'x':
        case 'X':
            break;
        default:
            cout << "INVALID INPUT!!" << endl;
        }
    } while (choice != 'x' && choice != 'X');
    return 0;
}
