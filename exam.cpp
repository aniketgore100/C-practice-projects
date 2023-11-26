#include <bits/stdc++.h>
using namespace std;

int sumOfEven(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main(){
    int n = 6; // Hardcoded value for the array size
    int arr[] = {1, 2, 3, 4, 5, 6}; // Hardcoded values for the array

    int evenSum = sumOfEven(arr, n);
    cout << evenSum << endl;
}
