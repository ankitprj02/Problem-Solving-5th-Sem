#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int sz = str.size();

    bool hasHash = false, hasAmp = false;

    for (char c : str) {
        if (c == '#') hasHash = true;
        if (c == '&') hasAmp = true;
    }

    if (sz % 2 == 0 && hasHash && hasAmp) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    



    return 0;
}
