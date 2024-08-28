#include <iostream>

int main() {
    int first = 1, second = 0;
    int solution=0;
    std::cout << "Enter 2 intigers, first one must be lower second.\n";
    while(first > second) {
        std::cout << "First one: ";
        std::cin >> first;
        std::cout << "Second one: ";
        std::cin >> second;

        if(first > second)
            std::cout << "First is greater than second intiger\n";
    }

    for(first; first <= second; first++) {
        solution += first + second;
        second--;
    }

    std::cout << solution;
    return 0;
}
