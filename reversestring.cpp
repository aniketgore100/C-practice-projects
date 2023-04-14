
#include <bits/stdc++.h>

using namespace std;

void reversestr(string s, int i, int j){
    if(i>j)
       return ;

       swap(s[i], s[j]);
       i++;
       j--;

       reversestr(s, i, j);
}

int main()
{
    string s;
    cin>>s;
    reversestr(s,0, s.length()-1);
    cout<<s<<endl;
    return 0;
}
