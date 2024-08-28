#include <iostream>

using namespace std;
int main() {
    //zmienne symboliczne
    const int c_stopa_cal = 12;
    const float c_funt_kg = 2.2;

    int stopa;
    float cal;
    float funt;
    double wzrost;
    double waga;
    double BMI;
    cout << "Program liczy twoj wskaznik BMI" << endl;
    cout << "Podaj wartosc wzrost w stopach (liczba calkowita) oraz wartosc w calach (liczba zmiennoprzecinkowa albo calkowita)"<<endl;
    cout << "Wartosc w stopach(1 stopa = 30,48cm): ";
    cin >> stopa;
    cout << "Wartosc w calach(1 cal = 2,54cm): ";
    cin >> cal;
    cout << "Podaj wage w funtach(1 funt = 0,45kg): ";
    cin >> funt;

    wzrost = (float(stopa)* c_stopa_cal + cal) * 0.0254;
    waga = funt/c_funt_kg;
    BMI = waga/(wzrost*wzrost);

    cout << "Wzrost: " << wzrost << endl;
    cout << "Waga: " << waga << endl;
    cout << "BMI: " << BMI << endl;

    return 0;
}
