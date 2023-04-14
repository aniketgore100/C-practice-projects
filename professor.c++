#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod (100000007)
#define ll long long 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second 
#define loop(i,n) for(int i=0; i<n; i++)
#define loop1(i,n) for(int i=1; i<=n; i++)

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	  int t, n=0, count=0;
	  string a = " ";
	  cin>>t;
	  while(t--){
	      
	    cin>>n;
	    cin>>a;
	    
	    count=0;
	    for (int i=0;i<n-1;i++) {
	        if (a[i]==a[i+1]) {
	            count++;
	        }
	    }
	    
	    if (count==0) {
	        cout<<"NO"<<endl;
	    }
	    
	    else {
	        cout<<"YES"<<endl;
	    }
	  }
   
   return 0;
}
