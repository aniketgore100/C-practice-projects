#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if( (a+b) % 2 == 1 || (b+c)%2==1 || (c+a)%2==1){
           cout<<"yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}