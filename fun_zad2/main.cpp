#include <iostream>
using namespace std;
void enterFun(int SIZE, int * number) {
    cout << "Enter a 10 numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        while(!(cin >> number[i])) {
            cout << "It must be number";
            cin.clear();
            cin.ignore(SIZE, '\n');
            cin >> number[i];
        }
    }
}
double avarageFun(int * number, int SIZE) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += number[i];
    }
    double average = static_cast<double>(sum) / static_cast<double>(SIZE);
    return average;
}
void showResult(int * number, int SIZE, double average) {
    for (int i = 0; i < SIZE; i++) {
        cout << number[i] << " ";
    }
    cout << endl;
    cout << average << endl;
}
int main() {
    const int SIZE = 10;
    int number[SIZE] = {};
    enterFun(SIZE, number);
    cout << endl;
    showResult(number, SIZE, avarageFun(number, SIZE));
    return 0;
}
