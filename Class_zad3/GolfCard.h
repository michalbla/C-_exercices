//
// Created by Michal on 30.09.2024.
//
#ifndef GOLFCARD_H
#define GOLFCARD_H
#include <iostream>


class GolfCard {
    enum{len = 18,};
    int hole[len][4] = {};
    std::string playerName;
    std::string clubName;
public:
    GolfCard(){playerName = "NoName"; clubName = ""; for(int i = 0; i < len; i++){*hole[i] = {};}}
    GolfCard(std::string, int[len][4]);
    int showPlayerScore();
    ~GolfCard() = default;

};
void programManager();
void showPointsByRules();
bool IfEscape(char);



#endif //GOLFCARD_H
