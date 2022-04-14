#include <bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin>>t;
   while(t--){
       int a,b,n;
       cin>>a,b,n;
       if(n==1){
           a = a*2;
       }
       for(int i=1; i<=n; i++){
           a = a*2;
           i++;
           b = b*2;
       }
      
   }
   return 0;
}