
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x;
    cin>>n>>x;
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
          v.push_back(s[i]);
        }
        else{
            v.push_back(0);
        }
    }
  for(int i=0; i<n; i++){
      cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
