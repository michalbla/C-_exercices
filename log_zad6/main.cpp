#include <iostream>

using namespace std;
struct contributor {
    double contribution{};
    string name;
};
int main() {
    int numberOfCon, conCount = 0;
    cout << "Enter number of contributors: ";
    cin >> numberOfCon;
    contributor *  contributors = new contributor[numberOfCon];

    for (int i = 0; i < numberOfCon; i++) {
        cout << "Enter name #" << i + 1 << " contributor: ";
        cin >> contributors[i].name;
        cout << "Enter contribution: ";
        cin >> contributors[i].contribution;
    }

    cout << "\n\nGrand Patrons:" << endl;
    for (int i = 0; i < numberOfCon; i++) {
        if(contributors[i].contribution >= 10000) {
            cout << "Name: " << contributors[i].name << endl;
            cout << "Contribution: " << contributors[i].contribution << endl << endl;
            conCount++;
        }
    }
    if(conCount == 0)
        cout << "None" << endl << endl;

    conCount = 0;
    cout << "Remaining donors: " << endl;
    for (int i = 0; i < numberOfCon; i++) {
        if(contributors[i].contribution < 10000) {
            cout << "Name: " << contributors[i].name << endl;
            cout << "Contribution: " << contributors[i].contribution << endl;
            conCount++;
        }
    }
    if(conCount == 0)
        cout << "None";

    delete[] contributors;
    return 0;
}
