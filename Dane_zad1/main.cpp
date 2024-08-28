#include <iostream>

using namespace std;
int main() {
    const double c_stopa = 30.48;
    const double c_cal = 0.254;
    double centymetry;
    double Stopa;
    double Cal;

    cout << "Podaj wzrtost w centymetrach a obliczymy ile wynosi w stopach oraz calach: ";
    cin >> centymetry;

    Stopa = centymetry / c_stopa;
    Cal = centymetry / c_cal;

    cout << "Twoj wzrost: " << centymetry << endl;
    cout << "W stopach: " << Stopa << endl;
    cout << "W calach: " << Cal << endl;
    return 0;
}
