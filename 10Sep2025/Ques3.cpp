#include<bits/stdc++.h>
using namespace std;

int main()
{

    // rotation the given string of length N by K places forward left and right.
    //ex. input = quickfoxbrown ,  output = ownquickfoxbr
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    string right = s.substr(s.length() - k) + s.substr(0, s.length() - k);
    string left =s.substr(k) + s.substr(0, k);
    cout<<right<<endl<<left<<endl;
    
    return 0;
}