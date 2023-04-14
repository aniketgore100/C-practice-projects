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

string strOut(string str[], string s){
    int n = s.length();
    string output = "";
    for(int i=0; i<n; i++){
        if(s[i] == ' '){
            output = output + "0";
        }
        else{
            int position = s[i] - 'A';
            output = output + str[position];
        }
    }
    return output;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

      string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
      string s;
      cin>>s;
      cout<<strOut(str, s)<<endl;
   
   return 0;
}
