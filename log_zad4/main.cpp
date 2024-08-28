#include <iostream>
#include <bits/stdc++.h>

const int strsize = 100;
using namespace  std;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;

};

bool sortByNumber(bop &b1, bop &b2) {
    return b1.preference < b2.preference;
}
int main() {
    char choice;
    int n = 5;
    int numberOfBops = 0;
    bop bop[n] =
        {
        {"Wimp Macho", "Dinner BOP", "BOPPER name", 1},
        {"Raki Rhodes", "Lunch BOP", "BOPPER name1", 2},
        {"Michal Blaszczyk", "Lunch BOP", "BOPPER name3", 5},
        {"Irena Kuczkowska", "Lunch BOP", "BOPPER name2", 3},
        {"Tomasz Meczydziaslo", "Lunch BOP", "BOPPER name4", 4},
        };

    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\t\tb. display by title" << endl;
    cout << "c. display by bopname\td. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    while (choice != 'q' && choice != 'Q') {
        switch (choice) {
            case 'a':
            case 'A':
                for (int i = 0; i < n; i++) {
                    cout << bop[i].fullname << endl;
                }
                break;
            case 'b':
            case 'B':
                for (int i = 0; i < n; i++) {
                    cout << bop[i].title << endl;
                }
                break;
            case 'c':
            case 'C':
                for (int i = 0; i < n; i++) {
                    cout << bop[i].bopname << endl;
                }
                break;
            case 'd':
            case 'D':
                sort(&bop[0], &bop[n], sortByNumber);
                for (int i = 0; i < n; i++) {
                    cout << bop[i].fullname << endl;
                }
                break;
            default:
                cout << "Enter your choice: ";
        }
        cin >> choice;
    }
    return 0;
}
