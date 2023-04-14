#include <bits/stdc++.h>
using namespace std;

void name(int i, int n){
    if(i>n){
        return ;
    }
      name(i+1, n);
    cout<<i<<" ";
}


int main(){
   int n;
   cin>>n;
   name(1, n);
}