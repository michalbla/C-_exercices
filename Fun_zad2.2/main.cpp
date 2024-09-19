#include <iostream>
using namespace std;
struct CandyBar {
    char name[15];
    double weight;
    double calories;
};
void setCandyBar(CandyBar & candyBarName) {
    cout << "Enter a candy bar name:";
    cin.getline(candyBarName.name, 15);

    cout << "Enter a candy bar weight:";
    cin >> candyBarName.weight;
    cout << "Enter a candy bar calories:";
    cin >> candyBarName.calories;
}
void displayCandyBar(const CandyBar & candyBarName) {
    cout << "Name: " << candyBarName.name << endl;
    cout << "Weight: " << candyBarName.weight << endl;
    cout << "Calories: " << candyBarName.calories << endl;
}
int main() {
    CandyBar candyBar;
    setCandyBar(candyBar);
    displayCandyBar(candyBar);
    cin.ignore();
    setCandyBar(candyBar);
    displayCandyBar(candyBar);
    return 0;
}
