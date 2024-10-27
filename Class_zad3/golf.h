//
// Created by Michal on 19.09.2024.
//

#ifndef GOLF_H
#define GOLF_H



class golf {
    enum {Len = 40};
    char *fullname;
    int score;
public:
    golf(){fullname = {}; score = 0; };
    golf(char * fullname, int score);
    static int getScore(const int & number){return number;};
    static char getFullname(const char * fullname){return *fullname;};
    void showPlayerScore();

    ~golf()= default;
};
void showPointsByRules();


#endif //GOLF_H
