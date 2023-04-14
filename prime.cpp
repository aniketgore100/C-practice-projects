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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        if (n==1) {
            cout<<"no"<<endl;
        }
        if (n==2) {
            cout<<"yes"<<endl;
        }
        if (n>2)
        {
            int count = 0;
        for (int i=2 ;i<=(n-1);i++) {
            if (n%i==0) {
                count++;
            }  
        }
        
        if (count ==0) {
            cout<<"yes"<<endl;
        }
        else {
             cout<<"no"<<endl;
        }
        
        }   
        
    }
	
	return 0;
}


