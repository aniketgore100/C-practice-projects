/* 
 i=3
 sum = 0;

*/

#include <bits/stdc++.h>

using namespace std;

void sum(int i,  int sumx){
    if(i<1){
        cout<<sumx<<endl;
        return;
    }
    sum(i-1, sumx+i);
}

int main()
{   
    int n;
    cin>>n;
    sum(n, 0);
    return 0;
}
