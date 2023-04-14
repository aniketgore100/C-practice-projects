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
#define loop(i,n) for(int i=0; i<n;/ i++)
#define loop1(i,n) for(int i=1; i<=n; i++)

void revstr(string& str, int i, int j){
if(i>j){
    return;
}
swap(str[i], str[j]);
i++;
j--;

revstr(str, i, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin>>str;
    revstr(str, 0, str.length()-1);
    cout<<str<<endl;
   return 0;
}
