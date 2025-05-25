//todo - Move all zeros to the end of the array.

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

void moveZerosToEndOfArray(int* arr, int n) {
    if(n == 1) return;
    int i = 0, j = 0;
    bool flag = false;
    while(j < n) {
        if(arr[j] == 0 && flag == false) {
            i = j;
            flag = true;
        }
        else if(arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
    return;
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
    moveZerosToEndOfArray((int*)arr, n);
    printArray(arr, n);
}