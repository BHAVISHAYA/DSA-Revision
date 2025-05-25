//todo - Missing number in an array.

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

//* Method-1 First optimal approach using sum 
int missingNumberInArray(int arr[], int n) {
    int sum = accumulate(arr, arr + (n - 1), 0);
    int totalSum = (n * (n + 1)) / 2;
    return (totalSum - sum);
}

//? Time Complexity = O(n)
//? Space Complexity = O(1)


//* Method-2 Second optimal approach using XOR operator (odd 1 out) 
int findMissingNumber(int arr[], int n) {
    int xor1 = 0, xor2 = 0;
    for(int i = 0 ; i < n - 1 ; i++) {
        xor1 = xor1 ^ (i + 1);
        xor2 = xor2 ^ arr[i];
    }
    xor1 = xor1 ^ n;
    return (xor1 ^ xor2);
}

//? Time Complexity = O(n)
//? Space Complexity = O(1)

int main() {
    int n;
    cin >> n;
    int arr[n - 1];
    for(int i = 0 ; i < n - 1 ; i++) {
        cin >> arr[i];
    }
    printArray(arr, n - 1);
    cout << "Missing number = " << missingNumberInArray(arr, n) << endl;
    cout << "Missing number = " << findMissingNumber(arr, n) << endl;
}