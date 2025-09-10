#include<bits/stdc++.h>
using namespace std;

int main()
{

    // rotate the given string s of length N by K places towards left and right. Given K>N;
    int n,k;
    string s;
    cin>>n>>k;
    cin.ignore();
    getline(cin,s);
    k=k%n;
    string right = s.substr(n - k) + s.substr(0, n - k);
    string left =s.substr(k) + s.substr(0, k);
    cout<<right<<endl;
    cout<<left<<endl;
    
    return 0;
}