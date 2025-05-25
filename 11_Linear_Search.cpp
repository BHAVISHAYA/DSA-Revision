//todo - Linear Search 

#include<bits/stdc++.h>
using namespace std;

string isNumExist(int arr[], int n, int toFind) {
    for(int i = 0 ; i < n ; i++) {
        if(arr[i] == toFind) {
            return "true";
        }
    }
    return "false";
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
    int toFind;
    cin >> toFind;
    cout << "Is number exist = " << isNumExist(arr, n, toFind) << endl;
}