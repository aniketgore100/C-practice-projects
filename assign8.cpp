#include <bits/stdc++.h>
using namespace std;

string encrypt(string str, int shift){
    for(char c : str){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A' ;
           string result += char(((base +shift) / 2) + base);
        }
        else{
            
        }
    }
}

int main(){
    string text;
    cin>>text;
    getline(cin, text);
    int shift;
    cin>>shift;
}