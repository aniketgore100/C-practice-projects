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
// Aniket Gore

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	  {
	   for(j=1;j<=i;j++)
		{
			cout<<"X ";
		}
		cout<<"\n";
    }
		for(i=4;i>=1;i--)
	    {
		 for(j=1;j<=i;j++)
		  {
			cout<<"X ";
		  }
		cout<<"\n";
    	}
}

