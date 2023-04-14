#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c, int d){
    int ans;
    if(a>b && a>c && a>d)
      ans = a;
    else if(b>c && b>d)
      ans = b;
    else if(c>d)
      ans = c;
      else
       ans = d;
       return ans;
}

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max(a,b,c,d);
    cout<<ans<<endl;
    return 0;
}