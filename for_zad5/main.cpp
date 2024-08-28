#include <iostream>
const int Months = 12;
const int Years = 3;
int main()
{
    const std::string months[Months] ={
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int SoldBooks[Months][Years] = {};
    int SoldBooksByYear[Years] = {};
    int TotalSoldBooks = 0;

    for(int j = 0; j <= Years - 1; j++) {
        for(int i = 0;i <= Months - 1; i++ ) {
            std::cout << "How many books did you sale in " << months[i] << "in " << j+1 << ": ";
            std::cin >> SoldBooks[i][j];
            TotalSoldBooks += SoldBooks[i][j];
        }
        SoldBooksByYear[j] = TotalSoldBooks;
        TotalSoldBooks = 0;
    }

    for(int i = 0; i <= Years - 1; i++) {
        std::cout << "Sold Books in " << i + 1 << " Year: " << SoldBooksByYear[i] << std::endl;
        TotalSoldBooks += SoldBooksByYear[i];
    }
    std::cout << "Total sold books: " << TotalSoldBooks;
    return 0;
}
