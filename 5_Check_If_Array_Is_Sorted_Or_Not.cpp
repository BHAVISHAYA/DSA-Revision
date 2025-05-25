//todo - Check if array is sorted or not.

#include<bits/stdc++.h>
using namespace std;

string isSorted(int arr[], int n) {
    if(n == 1) return "true";
    for(int i = 0 ; i < n - 1 ; i++) {
        if(arr[i] > arr[i + 1]) {
            return "false";
        }
    }
    return "true";
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
    cout << "isSorted = " << isSorted(arr, n) << endl;
}