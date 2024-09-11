//
// Created by michal on 9/9/24.
//

#include "Person.h"

#include <cstring>
#include <iostream>
Person::Person(const string &ln, const char *fn) {
    std::cout << "You called a constructor with at least one argument " << ln << endl;
    lname = ln;
    strcpy(fname, fn);
    fname[LIMIT - 1] = '\0';
}
void Person::Show() const {
    std::cout << fname << std::endl;
}
void Person::FormalShow() const {
    std::cout << fname << std::endl;
    std::cout << lname << std::endl;
}


