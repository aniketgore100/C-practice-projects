

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());            //6543210
    cout<<s<<endl;
    return 0;
}
