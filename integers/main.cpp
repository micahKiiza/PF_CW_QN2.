#include <iostream>
using namespace std;

void printDivisors(int num) {
    cout << "Divisors of " << num << " in decreasing order:\n";
    for (int i = num; i >= 1; --i) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int number;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you.\n";
    cout << "The program will repeatedly prompt you to enter a positive integer.\n";
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order.\n";

    do {
        cout << "Please enter a positive integer: ";
        cin >> number;

        while (number <= 0) {
            cout << number << " is not a positive integer.\n";
            cout << "Please enter a positive integer: ";
            cin >> number;
        }

        printDivisors(number);

        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

    } while (choice == 'Y' || choice == 'y');

    cout << "Program terminated.\n";
    return 0;
}
