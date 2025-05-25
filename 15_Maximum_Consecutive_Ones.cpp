//todo - Maximum consecutive ones in a binary array.

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

int maxConsecutiveOnes(int* arr, int n) {
    int i = 0, ct = 0, ans = 0; 
    while(i < n) {
        if(arr[i] == 1) {
            ct++;
        } else {
            ans = max(ans, ct);
            ct = 0;
        }
        i++;
    }
    return ans;
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
    printArray(arr, n);
    cout << "Max Consecutive Ones = " << maxConsecutiveOnes(arr, n) << endl;
}