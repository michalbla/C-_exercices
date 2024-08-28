#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    float weight{};
    int calories{};
};

int main() {
    int n = 3;
    CandyBar * snacks = new CandyBar[n];
    for(int i = 0; i < n; ++i) {
        std::cout << "Type name of your favourite candy bar: ";
        std::getline(std::cin >> std::ws, snacks[i].name);
        std::cout << "Weight of " << snacks[i].name << ":";
        std::cin >> snacks[i].weight;
        std::cout << "Calories: ";
        std::cin >> snacks[i].calories;
    }

    std::cout << "\n";


    for(int i = 0; i < n; i++) {
        std::cout << "Brand name of candy bar: " << snacks[i].name << std::endl;
        std::cout << "weight: " << snacks[i].weight << std::endl;
        std::cout << "Number of calories: " << snacks[i].calories << "\n\n";
    }

    return 0;
}
