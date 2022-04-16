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


void solve(){
   ll arr[3][3];
   vector<ll>sum;
   ll rowsum=0,colsum=0;
   ll res1=0,res2=0;
   for(ll i=0;i<3;i++){
       for(ll j=0;j<3;j++){
           cin>>arr[i][j];
       }
       
   }
   for(ll i=0;i<3;i++){
       rowsum=0;
       for(ll j=0;j<3;j++){
           rowsum+=arr[i][j];
        //   colsum+=arr[j][i];
        
       }
       sum.push_back(rowsum);
   }
   for(ll j=0;j<3;j++){
       colsum=0;
       for(ll i=0;i<3;i++){
        //   rowsum+=arr[i][j];
          colsum+=arr[i][j];
        
       }
       sum.push_back(colsum);
   }
    //   if(rowsum>res1 && rowsum%2!=0){
    //       res1=rowsum;
    //   }
    //   if(colsum>res2 && colsum%2!=0){
    //       res2=colsum;
    //   }
   
    ll res=*max_element(sum.begin(),sum.end());
    if(res==0)
    {
    cout<<"0"<<endl;
    return;
    }
    if(res%2==0 && res!=0)
    res--;
    cout<<res<<endl;
  
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t=1;
	cin>>t;
	while(t--){solve();}
	return 0;
   
   return 0;
}


