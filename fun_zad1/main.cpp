#include <iostream>

struct Numbers {
    int x;
    int y;
    int result;
};
Numbers resultOfHarmonic(int n, int n1) {
    Numbers result;
    result.result = 2 * n + n1 / (n + n1);
    return result;
}
void show_result(Numbers b) {
    std::cout << b.result << std::endl;
}
int main() {
    using namespace std;
    Numbers harmonic;

    cout << "Harmonic mean = 2.0 * x * y / (x+y)\n\n";
    while(true) {

        cout << "Please enter an x: ";
        cin >> harmonic.x;
        cout << "Please enter an y: ";
        cin >> harmonic.y;
        if(harmonic.x == 0 || harmonic.y == 0) {
            break;
        }
        show_result(resultOfHarmonic(harmonic.x, harmonic.y));
    }
    return 0;
}
