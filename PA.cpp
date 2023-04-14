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
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define E 2.71828182845904523536
using namespace std;
 
 
 
int main()
{
 
    while(1)
    {
        int m,n;
        cin >> m >> n;
        if (m == 0 && n == 0) break;
        int carry=0, ncarries =0;
        while( m > 0 || n > 0)
        {
            carry =  (m%10 + n%10 + carry)/10;
            m/= 10;
            n /= 10;
            if (carry) ncarries++;
        }
 
        if (ncarries == 0) cout << "No carry operation.\n";
        else cout << ncarries << " carry operation" << ((ncarries > 1) ? ("s.\n") : (".\n"));
    }
    return 0;
}