// #include <iostream>
// using namespace std;

// string corrchar(string str, char ch) {
//     string result = "";
//     int n = str.length();
    
//     for (int i = 0; i < n; i++) {
//         if (str[i] != ch) {
//             result += str[i];
//         }
//     }
    
//     return result;
// }

// int main() {
//     string str;
//     cin >> str;

//     char ch;
//     cin >> ch;

//     string correctedStr = corrchar(str, ch);
//     cout << correctedStr;
    
//     return 0;
// }




#include <iostream>
using namespace std;

void corrchar(string &str, char ch) {
    char* src = &str[0];  // Pointer to the start of the string
    char* dest = src;    // Pointer to the destination in the string

    while (*src != '\0') {
        if (*src != ch) {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';  // Null-terminate the resulting string
}

int main() {
    string str;
    cin >> str;

    char ch;
    cin >> ch;

    corrchar(str, ch);
    cout << str;
    
    return 0;
}
