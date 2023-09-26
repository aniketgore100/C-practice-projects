#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.length();
    string result = "";
    for(int i=0; i<n; i++){
        sort(str.begin(), str.end());
        result = str;
    }
    cout<<result<<endl;
}