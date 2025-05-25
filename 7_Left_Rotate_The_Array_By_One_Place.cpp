//todo - Left rotate the array by one place 

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

//* Pass by pointer 
void leftRotateTheArrayByOnePlace(int* arr, int n) {
    if(n == 1) return;
    int temp = arr[0];
    for(int i = 0 ; i < n ; i++) {
        if(i != (n - 1)) {
            arr[i] = arr[i + 1];
        } else {
            arr[i] = temp;
        }
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
    leftRotateTheArrayByOnePlace((int*)arr, n);
    printArray(arr, n);
}