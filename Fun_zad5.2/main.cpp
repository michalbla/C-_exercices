#include <iostream>
template <typename T>
T max5(T * arr, int size);

int main() {
    int arrayOfInts[5] = {1, 2, 3, 4, 0};
    double arrayOfDoubles[5] = {2.4, 21.34, 12.42, 65.12, 1.00};
    std::cout << "Max intiger: "<< max5(arrayOfInts, 5) << std::endl;
    std::cout << "Max double: " << max5(arrayOfDoubles, 5);
    return 0;
}
template <typename T>
T max5(T  arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
