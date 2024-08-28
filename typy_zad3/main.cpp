#include <iostream>
#include <string>
#include <limits>
struct PizzaOrder {
    std::string name;
    int diameter{};
    float weight{};
};

int main() {
    PizzaOrder * ps = new PizzaOrder;
    std::cout << "Enter the company name: ";
    std::getline(std::cin >> std::ws, ps -> name);
    std::cout << "Diameter: ";
    while(!(std::cin >> ps -> diameter)) {
        std::cout << "Invalid input. Please enter the diameter of pizza: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "Weight: ";
    while(!(std::cin >> ps -> weight)) {
        std::cout << "Invalid input. Please enter the weight of pizza: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "\n";

    std::cout << "Name of company: "<< ps -> name <<std::endl;
    std::cout << "Diameter: " << ps -> diameter <<std::endl;
    std::cout << "Weight: " << ps -> weight;

    return 0;
}
