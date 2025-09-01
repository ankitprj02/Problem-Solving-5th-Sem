#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {10, 5, 30, 20, 25};
    sort(arr, arr + 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    sort(arr, arr + 5,greater<int>());

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
