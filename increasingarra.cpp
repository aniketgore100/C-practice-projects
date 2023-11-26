#include <iostream>
#include <cctype>

using namespace std;

string swapCases(const string& input) {
    string result = input;

    for (char& c : result) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }

    return result;
}

int main() {
    string input;
    cin>>input;
    
    string output = swapCases(input);
    cout << output << endl;

    return 0;
}
