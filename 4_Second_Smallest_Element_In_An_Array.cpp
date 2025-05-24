//todo - Find the second smallest element of an array.

#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int size) {
    int small = INT_MAX, secondSmall = INT_MAX;
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] < small) {
            secondSmall = small;
            small = arr[i];
        } else if (arr[i] != small && arr[i] < secondSmall) {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

//? Time Complexity = O(n)
//? Space Complexity = O(1)

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    cout << "Second Smallest = " << secondSmallest(arr, n) << endl;
}