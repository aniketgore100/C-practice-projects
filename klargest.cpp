
#include <bits/stdc++.h>

using namespace std;

class myanswers{
    public:

	vector<int> kLargest(int arr[], int n, int k) {
    vector<int>v;
    priority_queue<int>pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }

    for(int i=0; i<k; i++){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}
};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    myanswers ans;
    auto res = ans.kLargest(arr, n, k);
    for(auto x : res) cout<< x << " ";
    cout<<"\n";
    return 0;
}
