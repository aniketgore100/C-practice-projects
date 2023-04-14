#include <bits/stdc++.h>
using namespace std;

int main(){

   string a[4] = {"Alice",  "Bob",  "Cindy", "Dani"}; 
   string b[3];
   for(int i=0; i<3; i++){
      cin>>b[i];
   }
  	int j=0;
		for(int i=0; i<4;i++){
		    
		    for( j=0;j<3;j++){
		        
		      if(a[i]==b[j])
			    break;
            }
			  if(j==3)
			  cout<<a[i];
		}        

  return 0;
}