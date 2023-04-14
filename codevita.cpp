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

// Aniket Gore ID: 84869012;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s = "9 8 10 7";
 
    vector<int>v;
    stringstream str(s);
 
    int product = 1, ans = 0;
    int x = 0;
    str >> x;
    for(int i = 0; i<s.length(); i++){
          int y = x % 10;
          v.push_back(y);                           //  converts string to integer
          x = x / 10;
    }

    sort(v.begin(), v.end());
   //  for(int i=0; i<v.size(); i++)
   //  {
   //    cout<<v[i]<<" ";
   // }cout<<endl;

    int q = v[0];
    for(int j = 1; j<v.size(); j++){
         product *= v[j];
    }
     
     if(q%2==0 && product%2==0){
         cout<<"None";
     }
     else{
         ans = product + q;
     }

      cout<<ans<<"\n";
   return 0;
}
