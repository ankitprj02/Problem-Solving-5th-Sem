#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;
    string newword = "";

    for (int i = word.size() - 1; i >= 0; i -= 2) {
        newword += word[i];
    }

    cout << newword << endl;

    return 0;
}
