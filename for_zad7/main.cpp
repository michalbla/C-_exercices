#include <iostream>

struct Car {
    std::string name;
    int year{};
};
int main() {
    int size;
    std::cout << "How many cars do you wish to catalog? ";
    std::cin >> size;
    Car *car = new Car[size];
    for(int i = 0; i < size; i++) {
        std::cout << "Car #" << i + 1 <<":\n";
        std::cout << "Please enter the name: ";
        std::getline(std::cin >> std::ws, car[i].name);
        std::cout << "Please enter the year made: ";
        std::cin >> car[i].year;
    }

    std::cout << "Hersie is your collection:\n";
    for(int i = 0; i < size; i++) {
        std::cout << car[i].year;
        std::cout << " " << car[i].name << std::endl;
    }

    delete[] car;
    return 0;
}
