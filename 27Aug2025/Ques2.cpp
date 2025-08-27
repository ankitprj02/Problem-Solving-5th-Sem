#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int maxVal = INT_MIN; // max value for this row
        for (int j = 0; j < n; j++) {
            int t;
            cin >> t;
            if (t > maxVal) {
                maxVal = t;
            }
        }
        cout << maxVal << "\n";
    }

    return 0;
}
