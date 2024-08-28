#include <iostream>

// 3 4 5 6 7 8 9
// 1 2 3 0 4 5 6
int main() {
    int input, solution = 0;
    while(input != 0) {
        std::cout << "Enter the input: ";
        std::cin >> input;
        solution += input;
    }
    std::cout << solution;
    return 0;
}
