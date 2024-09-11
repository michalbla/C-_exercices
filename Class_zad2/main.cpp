#include <iostream>
#include "Person.h"
using namespace std;
int main() {
    Person one; // use default constructor
    Person two("Smythecraft"); // use #2 with one default argument
    Person three("Dimwiddy", "Sam"); // use #2, no defaults
    cout << "First one:\n";
    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;
    cout << "Second one:\n";
    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;
    cout << "Third one:\n";
    three.Show();
    cout << endl;
    three.FormalShow();
    return 0;
}
