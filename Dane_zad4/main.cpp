#include <iostream>
using namespace std;

int main() {
    const int c_minut = 60;
    const int c_hour = 60 * 60;
    const int c_day = 24 * 60 * 60;

    long long int days;
    long long int hours;
    long long int number;
    long long int minutes;
    long long int reamainSeconds;

    cout << "this is a program witch is calculating seconds to days, hours, minutes and seconds from seconds."<<endl;
    cout << "Please, enter the number of seconds as an integer value: ";
    cin >> number;
    days = number/c_day;
    reamainSeconds = number % (days * c_day);
    hours = reamainSeconds/c_hour;
    reamainSeconds %= (hours * c_hour);
    minutes =reamainSeconds/c_minut;
    reamainSeconds %= (minutes * c_minut);
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << reamainSeconds << " seconds";


    return 0;
}
