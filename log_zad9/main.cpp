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

    char value;

    if(inFile.good()) {
        inFile >> value;
        if(!isdigit(value)) {
            cout << "Invalid format of file." << endl;
            cout << "Exiting..." << endl;
            exit(EXIT_FAILURE);
        }
        contributor *contributions = new contributor[value];
        int recount = 0;
        while {}
        for (int i = 0; i < value; i++) {
            cout << contributions[i].name << endl;
            cout << contributions[i].contribution << endl;
        }
        delete[] contributions;
    }

    return 0;
}
