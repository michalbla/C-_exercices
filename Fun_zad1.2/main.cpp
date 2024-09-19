#include <iostream>
#include <string>
using namespace std;
void show_string(string & st) {
    cout << st << endl;
    st += "\n" + st;
}
int main() {
    string st;
    getline(cin, st);
    show_string(st);
    cout << endl;
    cout << endl;
    show_string(st);
    return 0;
}
