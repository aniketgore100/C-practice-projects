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

void sole(){
  int n;
  cin>>n;
  int xsum(0), ysum(0), zsum(0);
  while(n--){
      int x, y, z;
      cin>>x>>y>>z;
        xsum += x;
        ysum += y;
        zsum += z;
  }
  if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
      
     
     sole();
   
   return 0;
}
