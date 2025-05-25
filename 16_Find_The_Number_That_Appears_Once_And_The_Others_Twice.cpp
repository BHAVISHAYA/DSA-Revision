//todo - Find the number that appears ones, and the others twice.

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

//* Method-1 To find the first element which occurs 1 time 
int numberWhichAppearOnes(int arr[], int n) {
    int maxElement = *max_element(arr, arr + n);
    int hsh[maxElement + 1] = {0};
    for(int i = 0 ; i < n ; i++) {
        hsh[arr[i]]++;
    }
    for(int i = 0 ; i < n ; i++) {
        if(hsh[arr[i]] == 1) return arr[i];
    }
    return -1;
}

//? Time Complexity = O(3n)
//? Space Complexity = O(maxElement)


//* Method-2 Optimal solution using xor 
int findTheNumWhichAppearsOnes(int arr[], int n) {
    int xor1 = 0;
    for(int i = 0 ; i < n ; i++) {
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
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
    cout << "Number which appear only ones = " << numberWhichAppearOnes(arr, n) << endl;
}