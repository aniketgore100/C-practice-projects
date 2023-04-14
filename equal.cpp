#include <bits/stdc++.h>
using namespace std;

int main(){
   int n1;
   cin>>n1;
   string s;
   cin>>s;
   int n = s.length();
   int ct1=0, ct2=0;
   for(int i=0; i<n; i++){
          if(s[i]=='a')
           ct1++;
          if(s[i]=='b')
           ct2++;
      
   }
   cout<< min(ct1, ct2);
}
//aaabb  make the string equal
