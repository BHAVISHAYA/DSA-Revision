//todo - We need to find the longest subarray with sum K.

#include<bits/stdc++.h>
using namespace std;

void printArray(long long int arr[], long long int n) {
    cout << endl;
    if(n == 0) {
        cout << "Array = []" << endl;
        return;
    }
    cout << "Array = [";
    for(long long int i = 0 ; i < n ; i++) {
        if(i != (n - 1))
        cout << "\'" << arr[i] << "\'," << " ";
        else 
        cout << "\'" << arr[i] << "\']";
    }
    cout << endl;
}

//* Brute Force Approach - Generate all possible subarrays and check length 
int lengthOfLongestSubarrayWithSumK(long long int* arr, long long int n, long long int k) {
    long long int maxLength = 0;
    for(long long int i = 0 ; i < n ; i++) {
        long long int sum = 0;
        for(long long int j = i ; j < n ; j++) {
            sum += arr[j];
            if(sum == k) {
                maxLength = max(maxLength, (j - i + 1));
            }
        }
    }
    return maxLength;
}

//? Time Complexity = O(n^2) 
//? Space Complexity = O(1)


//* Better Approach - Use prefix sum technique 
int findLengthOfLongestSubArray(long long int arr[], long long int n, long long int target) {
    map<long long int, long long int> pf;
    long long int sum = 0, maxLength = 0;
    for(long long int i = 0 ; i < n ; i++) {
        sum += arr[i];
        if(pf.find(sum) == pf.end()) {
            pf[sum] = i;
        }
        if(sum == target) {
            maxLength = max(maxLength, (i + 1));
        } else if(sum > target) {
            if(pf.find(sum - target) != pf.end()) {
                maxLength = max(maxLength, (i - pf[sum - target]));
            }
        }
    }
    return maxLength;
}

//* This solution also works fine in case of negative elements in the array 

//? Time Complexity = O(n * log n)
//? Space Complexity = O(n)



//* Optimal Approach - By using two pointer approach  
int findTheLength(long long int arr[], long long int n, long long int target) {
    long long int i = 0, j = 0, sum = 0, maxLength = 0;
    while(j < n) {
        sum += arr[j];
        while(sum > target && i <= j) {
            sum -= arr[i];
            i++;
        }
        if(sum == target) {
            maxLength = max(maxLength, (j - i + 1));
        }
        j++;
    }
    return maxLength;
}

//? Time Complexity = O(2n), in worst case 
//? Space Complexity = O(1)


int main() {
    long long int n;
    cin >> n;
    long long int arr[n];
    for(long long int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    long long int k;
    cin >> k;
    printArray(arr, n);
    cout << "Length of longest subarray = " << lengthOfLongestSubarrayWithSumK((long long int*)arr, n, k) << endl;
    cout << "Length of longest subarray = " << findLengthOfLongestSubArray(arr, n, k) << endl;
    cout << "Length of longest subarray = " << findTheLength(arr, n, k) << endl;
}