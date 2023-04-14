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

void sayd(int n, string arr[]){
    if(n==0) return;
    int rem = n % 10;
    n = n / 10;
    sayd(n, arr);
    cout<<arr[rem]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string arr[11] = {"zero", "one", "two", "three", "four", "five",
                     "six", "seven", "eight", "nine", "ten"};
    int n;
    cin>>n;
    sayd(n, arr);
//     vector<string>v;
//     while(n>0){
//     int rem = n % 10;
//     n = n / 10;
//     cout<<arr[rem]<<endl;
//     }
//    return 0;
}
