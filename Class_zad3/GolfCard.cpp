//
// Created by Michal on 30.09.2024.
//

#include "GolfCard.h"
int GolfCard::showPlayerScore() {
    std::cout << playerName << std::endl << std::endl;
    int count = 1;
    int sum = 0;
    std::cout << "|Hole -- |Yards -- |Handicap -- |Score\n";
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < 4; j++) {
            std::cout << "|";
            std::cout << hole[i][j];
            std::cout << "\t";
            if(j==0)
                std::cout << " ";
            if(j==1)
                std::cout << "   ";
            if(j==2)
                std::cout << "\t";

        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return sum;
}
void programManager() {
    char st;
    while(std::cin >> st && IfEscape(st)) {
        switch(st) {
            case 'a':
                case 'A':
                std::string name;

                std::cout << "User Created";
                break;
            case 'b':
                case 'B':
                std::cout << "";
            default:
                std::cout << "Wrong input";
                break;
        }
    }
}


void showPointsByRules() {
    std::cout << "Scoring in the game of golf:\n";
    std::cout << "6 points - 4 shots under par\n";
    std::cout << "5 points - 3 shots under par\n";
    std::cout << "4 points - 2 shots under par\n";
    std::cout << "3 points - birdie (playing a hole one stroke under his norm)\n";
    std::cout << "2 points = par\n";
    std::cout << "1 points - bogey (playing a hole one stroke above his norm)\n";
}
bool IfEscape(char st) {
    if(st == 'q' || st == 'Q')
        return false;
    return true;
}

