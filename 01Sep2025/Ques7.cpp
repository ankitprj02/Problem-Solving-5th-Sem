#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;                 // number of strings
    string arr[N];            // array of strings

    // input strings
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // process each string
    for (int i = 0; i < N; i++) {
        string word = arr[i];
        char firstChar = word[0];
        char lastChar = word[word.size() - 1];
        cout << firstChar << lastChar << endl;
    }

    return 0;
}
