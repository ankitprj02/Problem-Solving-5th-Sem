#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N], subArray[5];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N, greater<int>());
    int sum = accumulate(arr, arr + 5, 0);
    for (int i = 0; i < 5; i++) {
        subArray[i] = arr[N - 1 - i];  
    }

    sort(subArray, subArray + 5, greater<int>());

    cout << sum << endl;
    for (int i = 0; i < 5; i++) {
        cout << subArray[i] << " ";
    }
    cout << endl;

    return 0;
}
