#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   long long n,m;  
   cin>> n >>m;

  ll temp = 2;
  ll cnt  = 0;
  while(temp <= n){
    temp <<= 1;
    cnt++;
  }
                                     //CS#!%@
  temp /= 2;
  long long one = cnt+1;
  if(one > m){
    cout<< 0 <<endl;
    return;
  }

  if(temp == n){
    cout<<1 + (m-one)<<endl;
  }
  else{
    cout<<(m - one)<<endl;
 }
}

int main(){
  int t;
  cin>>t;
  for(int i = 0; i < t; i++){
    solve();
   } 
  return 0;
}