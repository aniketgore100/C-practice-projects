#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b,c;
    cin>>a>>b>>c;
    if(a > b && a > c){
        cout<<" c is less"<<endl;
    }
    else if(b > a && b > c){
        cout<<"b is less "<<endl;
    }
    else {
        cout<<"a is less"<<endl;
    }
}