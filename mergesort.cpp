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

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }
    
    k = mid +1;
    for(int i=0; i<len2; i++){
        second[i] = arr[k++];
    }

    // merge
    int index = 0;
    int index2 = 0;
    int mainarrin = s;

    while(index < len1 && index2 < len2){
        if(first[index] < second[index2]){
            arr[mainarrin++] = first[index++];
        }
        else{
            arr[mainarrin++] = second[index2++];
        }
    }

    while(index < len1){
        arr[mainarrin++] = first[index++];
    }

     while(index2 < len2){
        arr[mainarrin++] = second[index2++];
    }
}

void mergesort(int *arr, int s, int e ){
    if(s >= e){
        return ;
    }
    // left sort
    int mid = (s+e)/2;
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);
    merge(arr, s, e);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    loop(i,n){
        cin>>arr[i];
    }
      mergesort(arr, 0, n-1);
   loop(i, n){
    cout<<arr[i]<<" ";
   }
   return 0;
}
