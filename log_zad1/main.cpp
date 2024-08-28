#include <iostream>
#include <cctype>
#include <sstream>
#include <vector>

int main() {
    using namespace std;
    string in;
    vector<string> words;
    string temp;
    stringstream sstm;
    while(in != "@") {

        if(in.find('@') != string::npos) {
            temp = in.substr(0, in.find('@'));
            sstm.str(temp);
            words.push_back(temp);
            break;
        }
        for(int i = 0; i < in.length(); i++) {
            if(isdigit(in[i]))
                in.replace(i,1,"");
            if(islower(in[i]))
                in[i] = toupper(in[i]);
            else if(isupper(in[i]))
                in[i] = tolower(in[i]);
        }
        words.push_back(in);
        cin >> in;
    }

    for(int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
    }
    return 0;
}
