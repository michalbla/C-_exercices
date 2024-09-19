#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
void stringToUpper(string & st) {
    transform(st.begin(), st.end(), st.begin(), ::toupper);
}
int main() {
    string st;
    cout << "Enter a string: ";
    while(true) {
        cin >> st;
        if (st == "q") {
            cout << "Bye.";
            break;
        }
        stringToUpper(st);
        cout << st << endl;
        cout << "Next string (q to quit): ";
    }
    return 0;
}
