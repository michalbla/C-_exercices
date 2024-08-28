#include <iostream>
#include "iomanip"
using namespace std;
int main() {
    string name;
    long long int worldPopulation, locationPopulation;
    double value;

    cout << "This is the program which, requests the user to enter the current world population and the population of typed by user country/continent/city etc." << endl;
    cout << "Enter the world's population: ";
    cin >> worldPopulation;
    cout << "Enter the location: ";
    cin >> name;
    cout << "Enter the population og the " << name << ": ";
    cin >> locationPopulation;

    value = (double(locationPopulation)/double(worldPopulation))*100;
    cout << "The population of the " << name << "is: " << setprecision(6) <<value;

    return 0;
}
