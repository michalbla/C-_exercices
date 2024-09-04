// lotto.cpp -- probability of winning
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
long double probabilityOfMegaNumber(unsigned number, unsigned picks);
long double probabilityOfFinalChance(unsigned basicChance, unsigned additionalChance);
int main()
{
    using namespace std;
    double total, choices;
    double secondGamePicks, secondGamePick;
    cout << "Enter the total number of choices on the game card and\n"
    "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices); // compute the odds
        cout << " of first game.\n";
        while(!((cin >> secondGamePicks >> secondGamePick) && secondGamePicks <= secondGamePick)) {
            cout << "You have one chance in ";
            cout << probabilityOfMegaNumber(secondGamePicks, secondGamePick);
            cout << endl;
            cout << "Your final chance to get mega WIN: ";
            cout << probabilityOfFinalChance(probability(total, choices), probabilityOfMegaNumber(secondGamePicks, secondGamePick));
            cout << endl;
            break;
        }
        cout << "And again... (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}
long double probabilityOfMegaNumber(unsigned number, unsigned pick) {
    long double result = 1.0;
    result = result * number / pick;
    return result;
}
long double probabilityOfFinalChance(unsigned basicChance, unsigned additionalChance) {
    long double result = 1.0;
    result = result * basicChance * additionalChance;
    return result;
}