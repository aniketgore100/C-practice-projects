
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int sum = (n * (n+1) / 2);
    if(sum==m)
     cout<<"pattern match";
    else cout<<"pattern mismatch";
    return 0;
}
