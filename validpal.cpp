#include <iostream>
#include <algorithm>
using namespace std;

void pal(string s) {
    string sr = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            sr += tolower(s[i]);
        }
        else if (isdigit(s[i])) {
            sr += s[i];
        }
    }
    cout<<sr<<endl;
    string rev = sr;
    reverse(rev.begin(), rev.end());
    if (sr == rev) {
        cout << "valid" << endl;
    }
    else {
        cout << "invalid" << endl;
    }
}

int main() {
    string str;
    getline(cin, str);
    pal(str);
}
