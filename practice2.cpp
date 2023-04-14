#include <bits/stdc++.h>
using namespace std;
void fun(){
    int count = 0;
    if(count == 4) return; 
    cout<<count;
    count++;
    fun();
}

int main(){
    fun();
    return 0;
}