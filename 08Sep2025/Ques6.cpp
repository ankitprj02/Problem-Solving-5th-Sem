#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, m = 0;
    cin >> N;           // number of words
    char C;

    for (int i = 0; i < N; i++) {
        string w;
        cin >> w;       // take each word input

        for (char j : w) {
            if ((int)j > m) {
                m = (int)j;
                C = j;
            }
        }
    }

    cout <<C<< m;
    return 0;
}
