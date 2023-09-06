#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10, ps = 100;

    int username, password;
    cout<<"Enter a Username : "<<endl;
    cin>>username;
    if(username==a){
        cout<<"Enter a password : "<<endl;
        cin>>password;
        if(password==ps){
            cout<<"welcome"<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
    else{
        cout<<"Invalid"<<endl;
    }
}