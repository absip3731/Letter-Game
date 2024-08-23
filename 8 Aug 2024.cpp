#include<iostream>
using namespace std;

int addition(int num1, int num2) {
    return num1 + num2;
}

int subtraction(int num1, int num2) {
    return num1 - num2;
}

int multiplication(int num1, int num2) {
    return num1 * num2;
}

int division(int num1, int num2) {
    if (num2 == 0) {
        cout << "DIVISION BY ZERO IS NOT ALLOWED!" << endl;
        return 0;
    }
    return num1 / num2;
}

int square(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}

void table(int num) {
    for (int i = 1; i <= 10; i++)
        cout << num << " * " << i << " = " << num * i << endl;
}

int main() {
    char choice;
    int choice2;

    do {
        cout << "ENTER 1 TO START OR PRESS X TO EXIT: ";
        cin >> choice;

        switch (choice) {
        case '1': {
            do {
                cout << "PRESS 2 FOR ADDITION." << endl;
                cout << "PRESS 3 FOR SUBTRACTION." << endl;
                cout << "PRESS 4 FOR MULTIPLICATION." << endl;
                cout << "PRESS 5 FOR DIVISION." << endl;
                cout << "PRESS 6 FOR SQUARE." << endl;
                cout << "PRESS 7 FOR CUBE." << endl;
                cout << "PRESS 8 FOR THE TABLE YOU WANT." << endl;
                cin >> choice2;

                if (choice2 < 2 || choice2 > 8)
                    cout << "INVALID INPUT!" << endl;
            } while (choice2 < 2 || choice2 > 8);

            if (choice2 >= 2 && choice2 <= 5) {
                double num1, num2;

                do {
                    cout << "ENTER FIRST NUMBER: ";
                    cin >> num1;
                    if (num1 <= 0)
                        cout << "INVALID INPUT!!" << endl;
                } while (num1 <= 0);

                do {
                    cout << "ENTER SECOND NUMBER: ";
                    cin >> num2;
                    if (num2 <= 0)
                        cout << "INVALID INPUT!!" << endl;
                } while (num2 <= 0);

                if (choice2 == 2)
                    cout << "ADDITION: " << addition(num1, num2) << endl;
                else if (choice2 == 3)
                    cout << "SUBTRACTION: " << subtraction(num1, num2) << endl;
                else if (choice2 == 4)
                    cout << "MULTIPLICATION: " << multiplication(num1, num2) << endl;
                else if (choice2 == 5)
                    cout << "DIVISION: " << division(num1, num2) << endl;

            }
            else {
                double num;

                do {
                    cout << "ENTER A NUMBER: ";
                    cin >> num;
                    if (num <= 0)
                        cout << "INVALID INPUT!!" << endl;
                } while (num <= 0);

                if (choice2 == 6)
                    cout << "SQUARE: " << square(num) << endl;
                else if (choice2 == 7)
                    cout << "CUBE: " << cube(num) << endl;
                else if (choice2 == 8)
                    table(num);
            }
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
