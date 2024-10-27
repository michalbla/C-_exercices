//
// Created by Michal on 19.09.2024.
//

#include "golf.h"

#include <cstring>
#include <iostream>
golf::golf(char *name, int number) {
    fullname = new char[strlen(name) + 1];
    strcpy(fullname, name);
    score = number;
}

void golf::showPlayerScore() {
    std::cout << "Player name:\n";
    for(int i = 0; i < std::strlen(fullname); i++) {
        std::cout << fullname[i];
    }
    std::cout << "\nPlayer score: " << score;
}

