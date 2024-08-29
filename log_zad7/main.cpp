#include <iostream>
#include <vector>
#include <sstream>
int main() {
    std::cout << "Enter words (q to quit)" << std::endl;
    std::string in;
    std::vector<std::string> words;
    int vowels = 0, consonants = 0, others = 0;
    while(true) {

        std::cin >> in;
        char firstChar = *in.begin();

        words.push_back(in);
        switch (firstChar) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowels++;
                break;
            default:
                if (std::isalpha(firstChar))
                    consonants++;
                else
                    others++;

                break;
        }
        if(words.back() == "q") {
            --consonants;
            break;
        }
    }
    std::cout << vowels << " words beginning with vowels\n";
    std::cout << consonants << " words beginning with consonants\n";
    std::cout << others << " others";
    return 0;
}
