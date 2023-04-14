#include <bits/stdc++.h>

using namespace std;

class myanswers{
    public:

	vector<int> kLargest(vector<int>&arr, int n) {
    vector<int>result {arr[0]};
    for(int i=1; i <arr.size(); i++){
        result.push_back(result.back() + arr[i]);
    }
    return result;
}
};
int main()
{
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i =0;i<n;i++){
    cin>>V[i];
 }
    myanswers ans;
    auto res = ans.kLargest(V, n);
    for(auto x : res) cout<< x << " ";
    cout<<"\n";
    return 0;
}