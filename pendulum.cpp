#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod (100000007)
#define ll long long 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second 
#define loop(i,n) for(int i=0; i<n; i++)
#define loop1(i,n) for(int i=1; i<=n; i++)

int subArraySum(int arr[], int n, int sum)
{
	int curr_sum, i, j;
	for (i = 0; i < n; i++) {
		curr_sum = arr[i];
		for (j = i + 1; j <= n; j++) {
			if (curr_sum == sum) {
				 cout<<"possible"<<endl;
				return 1;
			}
			if (curr_sum > sum || j == n)
				break;
			curr_sum = curr_sum + arr[j];
		}
	}
	cout << "not possible";
	return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int n, sum;
    cin>>n>>sum;
    int arr[n];
	loop(i, n){
        cin>>arr[i];
    }
	subArraySum(arr, n, sum);
   return 0;
}















