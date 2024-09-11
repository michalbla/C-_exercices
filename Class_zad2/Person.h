//
// Created by michal on 9/9/24.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;


class Person {
private:
    static int const LIMIT = 25;
    string lname; // Person’s last name
    char fname[LIMIT]{}; // Person’s first name
public:
    Person() {lname = ""; fname[0] = '\0'; } // #1
    Person(const string & ln, const char * fn = "Heyyou"); // #2
    // the following methods display lname and fname
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};



#endif //PERSON_H
