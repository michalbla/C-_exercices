#include <iostream>
double Fill_array(double *array, int Size);
const void Show_array(double *array, int Size);
double Reverse_array(double *array, int Size);
int main() {
    const int Size = 10;
    double array[Size]={};
    Show_array(array, Fill_array(array, Size));
    std::cout << std::endl;
    Show_array(array, Reverse_array(array, Size));
    return 0;
}
double Fill_array(double *array, int Size) {
    int count = 0;
    for (int i = 0; i < Size; i++, count++) {
        std::cin >> array[i];
        while(std::cin.fail() ) {
            std::cin.clear();
            std::cin.ignore();
            std::cin >> array[i];
        }
    }
    std::cout << "The array is full:" << std::endl;

    return count;
}
const void Show_array(double *array, int Size) {
    for (int i = 0; i < Size; i++) {
        std::cout << array[i] << " ";
    }
}
double Reverse_array(double *array, int Size) {
    double temp;
    for (int i = 1; i < (Size - 1) / 2; i++) {
        temp = array[i];
        array[i] = array[Size - i - 1];
        array[Size - i - 1] = temp;
    }
    return Size;
}