//todo - Union of two sorted arrays. 

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

int unionOfTwoSortedArray(int* arr, int n, int* brr, int m, int* unionArr) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(arr[i] <= brr[j]) {
            if(k == 0 || unionArr[k - 1] != arr[i]) {
                unionArr[k] = arr[i];
                k++;
            } 
            i++;
        } 
        else {
            if(k == 0 || unionArr[k - 1] != brr[j]) {
                unionArr[k] = brr[j];
                k++;
            }
            j++;
        }
    }
    while(i < n) {
        if(k == 0 || unionArr[k - 1] != arr[i]) {
            unionArr[k] = arr[i];
            k++;
        } 
        i++;
    }
    while(j < m) {
        if(k == 0 || unionArr[k - 1] != brr[j]) {
            unionArr[k] = brr[j];
            k++;
        }
        j++;
    }
    return k;
}

//? Time Complexity = O(n + m)
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
    printArray(arr, n);
    printArray(brr, m);

    //* Dynamic array in C++
    int* unionArr = new int[0];

    int k = unionOfTwoSortedArray((int*)arr, n, (int*)brr, m, (int*)unionArr);
    printArray(unionArr, k);
}