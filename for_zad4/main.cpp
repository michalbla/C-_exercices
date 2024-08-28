#include <iostream>
struct DaphneBank {
    int invest;
    float percentage;
    float ammount;
};
struct CleoBank {
    float invest;
    float percentage;
};
int main() {
    int years = 0;
    DaphneBank Daphne = {
       100,
        0.10,
        100
    };
    CleoBank Cleo = {
        100,
        0.05
    };

    while (Cleo.invest <= Daphne.ammount) {
        Daphne.ammount = Daphne.percentage * static_cast<float>(Daphne.invest) + Daphne.ammount;
        Cleo.invest += Cleo.invest * Cleo.percentage;
        years++;
        std::cout << "Daphne Interest: " << Daphne.ammount << std::endl;
        std::cout << "Cleo Interest: " << Cleo.invest << std::endl;
    }

    std::cout << "Years to Cleo's investment to exceed the value of Daphne's: " << years;
    return 0;
}
