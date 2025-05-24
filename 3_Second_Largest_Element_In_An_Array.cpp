//todo - Find the second largest element in an array.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    cout << "Largest = " << largest << endl;
    cout << "Second Largest = "  << secondLargest << endl;
}

//? Time Complexity = O(n)
//? Space Complexity = O(1)