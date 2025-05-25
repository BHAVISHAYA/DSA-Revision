//todo - Right rotate the given array by K places.

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    cout << endl;
    if(n == 0) {
        cout << "Array = []" << endl;
        return;
    }
    cout << "Array = [";
    for(int i = 0 ; i < n ; i++) {
        if(i != (n - 1))
        cout << "\'" << arr[i] << "\'," << " ";
        else 
        cout << "\'" << arr[i] << "\']";
    }
    cout << endl;
}

void rightRotateAnArrayByKPlaces(int* arr, int n, int k) {
    reverse(arr, arr + (n - k));
    reverse(arr + (n - k), arr + n);
    reverse(arr, arr + n);
    return;
}

//? Time Complexity = O(2n)
//? Space Complexity = O(1)

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    k = k % n;
    printArray(arr, n);
    rightRotateAnArrayByKPlaces((int*)arr, n, k);
    printArray(arr, n);
}