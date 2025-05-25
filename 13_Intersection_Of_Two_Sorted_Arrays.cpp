// todo - Intersection of two sorted arrays. 

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

int intersectionOfTwoSortedArrays(int* arr, int n, int* brr, int m, int* intersectionArray) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(arr[i] == brr[j]) {
            intersectionArray[k] = arr[i];
            i++;
            j++;
            k++;
        }
        else if(arr[i] < brr[j]) {
            i++;
        } 
        else {
            j++;
        }
    }
    return k;
}

//? Time Complexity = O(min(n, m))
//? Space Complexity = O(1)

int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int brr[m];
    for(int i = 0 ; i < m ; i++) {
        cin >> brr[i];
    }

    //* Dynamic array in C++
    int* intersectionArray = new int[0];
    printArray(arr, n);
    printArray(brr, m);
    int k = intersectionOfTwoSortedArrays((int*)arr, n, (int*)brr, m, (int*)intersectionArray);
    printArray(intersectionArray, k);
}