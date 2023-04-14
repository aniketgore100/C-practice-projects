/* #include <bits/stdc++.h>
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

int main()
{
    int n, i,a[3005],b[3005],dif;
    while(scanf("%d",&n)==1)
    {
        priority_queue<int, vector<int>, greater<int> > mypq;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(i>1)
            {
                dif=a[i-1]-a[i];
                if(dif<0)
                    dif*=-1;
                mypq.push(dif);
            }
 
        }
        for(i=1;i<=n-1;i++)
        {
            if(i==mypq.top())
                mypq.pop();
            else
                break;
        }
        if(mypq.empty())
            printf("Jolly\n");
        else
            printf("Not jolly\n");
 
    }
    return 0;
}

*/




#include<bits/stdc++.h>
using namespace std;
 
// Function to check whether given sequence is
// Jolly Jumper or not
bool isJolly(int a[], int n)
{
    // Boolean vector to diffSet set of differences.
    // The vector is initialized as false.
    vector<bool> diffSet(n, false);
 
    // Traverse all array elements
    for (int i=0; i < n-1 ; i++)
    {
        // Find absolute difference between current two
        int d = abs(a[i]-a[i+1]);
 
        // If difference is out of range or repeated,
        // return false.
        if (d == 0 || d > n-1 || diffSet[d] == true)
           return false;
        // Set presence of d in set.
        diffSet[d] = true;
    }
 
     return true ;
}
 
// Driver Code
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0; i<a;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/ sizeof(arr[0]);
    isJolly(arr, n)? cout << "jolly" : cout << "not jolly";
    return 0;
}