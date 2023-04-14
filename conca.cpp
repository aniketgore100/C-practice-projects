
#include <bits/stdc++.h>
using namespace std;
vector <int> targetSum(vector <int> &nums)
{
  
    const int n = nums.size();
    for (int i = 0; i < n; ++i)
      nums.push_back(nums[i]);
    return nums;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int a;
   for(int i=0;i<n;i++)
   {
     cin>>a;
     v.push_back(a);
  }
    for(int &x : targetSum(v))
        cout << x << " ";
    cout << '\n';
}