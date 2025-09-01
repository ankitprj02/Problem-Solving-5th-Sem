#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {10, 5, 30, 20, 25};
    cout << sizeof(arr) / sizeof(arr[0]) << endl;  // number of elements
    cout << sizeof(arr) << endl;                    // total size in bytes
    return 0;
}
