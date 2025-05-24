//todo - Introduction of array.

#include<bits/stdc++.h>
using namespace std;

//* If we define a global array in C++ then it will filled with zeros 
//* We can define an array of size 10^7 globally 
int ar[6];

int main() {
    //* Local array (prints garbage value)
    //* The maximum length of an array we can define inside main function is 10^6
    int arr[6];
    for(int i = 0 ; i < 6 ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //* Global array (prints 0) 
    for(int i = 0 ; i < 6 ; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}