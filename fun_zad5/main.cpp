#include <iostream>
void recurs(int n) {
    int result = 1, temp = n;
    while (temp > 0) {
        result *= temp;
        temp--;
    }
    std::cout << result << std::endl;
    if(n>0)
        recurs(n-1);
}
int main() {

    recurs(4);
    return 0;
}
