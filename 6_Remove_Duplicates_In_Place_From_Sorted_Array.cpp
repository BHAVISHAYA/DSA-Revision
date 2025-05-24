//todo - Remove duplicates in place from the given array.

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    cout << endl;
    cout << "Array = [";
    for(int i = 0 ; i < n ; i++) {
        if(i != (n - 1))
        cout << "\'" << arr[i] << "\'," << " ";
        else 
        cout << "\'" << arr[i] << "\']";
    }
    cout << endl;
}

//* Pass by pointer  
void removeDuplicatesInPlace(int* arr, int n) {
    if(n == 1) return;
    int i = 0, j = 1;
    while(j < n) {
        if(arr[i] == arr[j]) {
            j++;
        } else {
            i++;
            swap(arr[i], arr[j]); 
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    printArray(arr, n);
    removeDuplicatesInPlace((int*)arr, n);
    printArray(arr, n);
}