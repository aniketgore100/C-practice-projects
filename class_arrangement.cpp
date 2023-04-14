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

int stringlet(string s){
    int n = s.length();
    int first = 0;
    int second = 0;
    loop(i, n){
        if(s[i]=='B'){
            first++;
        }
        else{
            second++;
        }
    }

    if(first > second + 1 || second > first + 1){
        return -1;
    }
    if(n%2==1){
        int num = (n+1)/2;
        int oe = 0;
        int ze = 0;
        loop(i, n){
            if(i%2==0){
                if(s[i]=='B'){
                    oe++;
                }
                else{
                    ze++;   
                }
            }
        }
        if(first > second){
            return num - oe;
        }else{
            return num-ze;
        }
    }
    else{
        int odd = 0;
        int even = 0;

        loop(i, n){
            if(s[i]=='B'){
                if(i%2==1){
                    odd++;
                }else{
                    even++;
                }
            }
        }
        return min((n/2) - odd, (n/2) - even);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

     string str;
     cin>>str;
     cout<<(stringlet(str));
   
   return 0;
}
