#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

void ignoreLine()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
bool hasUnextractedInput()
{
    return !cin.eof() && cin.peek() != '\n';
}
int main() {
    int input;
    cout << "Enter an income and program will calculate tax owed: ";
    while (cin >> input) {
        if (hasUnextractedInput()) {
            cin.clear();
            ignoreLine();
        }
    }
    return 0;
}
