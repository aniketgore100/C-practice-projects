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

float power(float x, int y){
   float temp;
    if(y == 0)
      return 1;
      temp = power(x, y / 2);
      if(y%2 == 0)
        return temp*temp;
      else
        {
           if(y>0)
             return x * temp * temp;
             else 
               return (temp * temp) / x;
        }
      
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int x, y;
    cin>>x>>y;
    cout<<power(x, y)<<endl;
   return 0;
}
