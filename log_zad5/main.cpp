#include <iostream>
#include <limits>
#include <cctype>
using namespace std;


int main() {
    double input;
    double tax = 0;
    while (true) {
        cout << "Enter an income and program will calculate tax owed: ";
        cin >> input;
        if(cin.fail() || input<0) break;

        if (input > 35000) {
            tax = tax + (input - 35000) * 0.2;
            input = 35000;
        }

        if (input > 15000) {
            tax = tax + (input - 15000) * 0.15;
            input = 15000;
        }

        if (input > 5000) {
            tax = tax + (input - 5000) * 0.1;
            input = 5000;
        }

        cout << tax << endl;

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }



    return 0;
}
