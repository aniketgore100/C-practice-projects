#include <bits/stdc++.h>
using namespace std;

string replace(string str, string from, string to){
    int n = str.length();
    for(int i=0; i<n; i++){
        bool found = str.find(from);
        if(found){
            
        }
    }
    return str;
}

int main(){
    string str;
    cin>>str;
    string from, to;
    getline(cin, from);
    getline(cin, to);

    replace(str, from, to);
}