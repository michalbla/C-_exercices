#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    const int SIZE = 100;
    char filename[SIZE];
    ifstream inFile;

    cout << "Enter filename: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if (!inFile.is_open()) {
        cerr << "File could not be opened" << endl;
        cout << "Program terminating..." << endl;
        exit(EXIT_FAILURE);
    }
    int count = 0;
    char c;
    inFile.get(c);
    while (inFile.good()) {
        ++count;
        inFile.get(c);
    }
    if(inFile.eof())
        cout << "End of file reached.\n";
    else if(inFile.fail())
        cout << "Error reading file.\n";
    else
        cout << "Input terminated for unknown reason";
    if (count == 0)
        cout << "No data processed.\n";
    else {
        cout << "Total number of bytes read: " << count << endl;
    }

    inFile.close();

    return 0;
}
