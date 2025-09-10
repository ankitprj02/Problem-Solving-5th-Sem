#include<bits/stdc++.h>
using namespace std;

// String of length N and an integer(K). Print S after striping the first k and the last k characters.

int main()
{

    string s ; int n,k;
    cin>>n>>k;
    cin>>s;
    cout<<s.substr(k,s.size()-2*k);
    return 0;
}