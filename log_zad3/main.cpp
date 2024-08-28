#include <iostream>

int main() {
    using namespace std;
    char input;
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore\tp) pianist" << endl;
    cout << "t) tree\t\t\tg) game\n";
    cin >> input;
    while (input != 'Q' && input != 'q') {
        switch (input) {
            case 'c':
                case 'C':
                cout << "A maple is a carnivore";
                break;
            case 'p':
                case 'P':
                cout << "A piano is a piano";
                break;
            case 't':
                case 'T':
                cout << "A tree is a piano";
                break;
            case 'g':
                case 'G':
                cout << "A game is a piano";
                break;
            default:
                cout << "Please enter a c, p, t, or g: ";
        }
        cin >> input;
    }
    return 0;
}
