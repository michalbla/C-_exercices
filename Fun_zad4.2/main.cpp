#include <optional>
#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()

struct stringy {
    char * str; // points to a string
    int ct; // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
void set(stringy & beany, string st);
void show(const stringy & beany, int count = 1);
void show(const char * string, int count = 1);
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing); // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany
    show(beany); // prints member string once
    show(beany, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing); // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    show(beany);
    return 0;
}
void set(stringy & beany, string st) {
    beany.str = new char[st.length()];
    strcpy(beany.str, st.c_str());
    beany.ct = st.length();
}
void show(const stringy & beany, int count) {
    for(int i = 0; i < count; i++) {
        cout << beany.str << endl;
    }
}
void show(const char * string, int count) {
    for(int i = 0; i < count; i++) {
        cout << string << endl;
    }
}