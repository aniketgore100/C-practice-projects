#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int m;
    cin>>m;

    string res="";
    int n = str.length();
    for(int i = 0; i<=m; i++){
        res += str[i];
    }
    cout<<res<<endl;
}