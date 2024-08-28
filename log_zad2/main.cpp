#include <iostream>
#include <cctype>
#include <limits>
int main() {
    double temp=0;
    using namespace std;
    int n = 10;
    double values[n] = {};

    for (int i = 0; i < n; i++) {
        while (true) {
            cout << "Enter #" << i + 1 << " value: ";
            cin >> values[i];

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Invalid input. Please enter a number." << endl;
            } else
                break;
        }
    }

    cout << "Entered values: ";

    for (int i = 0; i < n; i++) {
        cout << values[i]<< " ";
        temp += values[i];
    }
    double avarage = temp/n;
    cout << "Avarage: " << avarage << endl;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (values[i] > avarage)
            count++;
    }

    cout << "Larger numbers than average: " << count << endl;

    return 0;
}