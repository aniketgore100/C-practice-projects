#include <bits/stdc++.h>
using namespace std;

void delstr(char c){
    string str;
    cin>>str;
    int n = str.length();
    for(int i=0; i<n; i++){
        if(str[i]==c){
            str.erase(i, 1);
            i--;
        }
    }
    cout<<str;
}

int main(){
    char c;
    cin>>c;
    delstr(c);
}