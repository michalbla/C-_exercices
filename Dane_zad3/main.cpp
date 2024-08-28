#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int c_StalaCzasowa = 60;
    int stopnie;
    int minuty;
    int sekundy;
    double wynik;
    cout << "Podaj dlugosc w stopniach, minutach i sekundach"<< endl;
    cout << "Najpierw podaj stopnie: ";
    cin >> stopnie;
    cout << "Nastepnie podaj minuty stopnia luku: ";
    cin >> minuty;
    cout << "Na koniec podaj sekundy luku: ";
    cin >> sekundy;

    wynik = float(stopnie) + (float (minuty)/float (c_StalaCzasowa)) + (float (sekundy)/(float (c_StalaCzasowa)*float (c_StalaCzasowa)));
    cout << stopnie << " stopnia, " << minuty << " minut, " << sekundy << " sekund = " << setprecision(6)<<wynik << " stopni";
    return 0;
}
