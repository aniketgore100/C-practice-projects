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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

      int n;
    cin>>n;
    int left[10001],right[10001];
    for(int i=0;i<n;i++){
        cin>>left[i]>>right[i];
    }
    int r0=0,r1=0,l0=0,l1=0;
    for(int i=0;i<n;i++){
        if(right[i]==1){
            r1++;
        }else{
            r0++;
        }
    }
    int red=min(r1,r0);
    for(int i=0;i<n;i++){
        if(left[i]==1){
            l1++;
        }else{
            l0++;
        }
    }
    red+=min(l1,l0);
    cout<<red;
	return 0;
   
   
}
