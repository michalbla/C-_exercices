#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
using namespace std;
struct contributor {
    double contribution{};
    string name;
};

int main() {

    int conCount = 0;
    const int SIZE = 60;
    char filename[SIZE];
    ifstream inFile;

    cout << "Enter name of data File: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if (!inFile.is_open()) {
        cout << "Could not open file " << filename << endl;
        cout << "Exiting..." << endl;
        exit(EXIT_FAILURE);
    }

    unsigned int value;

    if(inFile.good()) {
        inFile >> value;
        if(!value) {
            cout << "Invalid format of file." << endl;
            cout << "Exiting..." << endl;
            exit(EXIT_FAILURE);
        }
        contributor *contributions = new contributor[value];
        for (int i = 0; i < value; ++i) {
            // Read the name and contribution from the file
            inFile.ignore();  // Ignore any newline or whitespace before the name
            getline(inFile, contributions[i].name);
            inFile >> contributions[i].contribution;
        }

        // Output the contributions to verify
        cout << "\n\nGrand Patrons:" << endl;
        for (int i = 0; i < value; i++) {
            if(contributions[i].contribution >= 10000) {
                cout << "Name: " << contributions[i].name << endl;
                cout << "Contribution: " << contributions[i].contribution << endl << endl;
                conCount++;
            }
        }
        if(conCount == 0)
            cout << "None" << endl << endl;

        conCount = 0;
        cout << "Remaining donors: " << endl;
        for (int i = 0; i < value; i++) {
            if(contributions[i].contribution < 10000) {
                cout << "Name: " << contributions[i].name << endl;
                cout << "Contribution: " << contributions[i].contribution << endl;
                conCount++;
            }
        }
        if(conCount == 0)
            cout << "None";
        delete[] contributions;
    }

    return 0;
}
