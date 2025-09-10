#include<bits/stdc++.h>
using namespace std;

int main()
{

    // 1. Left Rotation by k
    // left rotation means moving the first k characters of the string to the end.
    string s="abcdefghijklm";
    int k=2;
    cout<<s.substr(k)+s.substr(0,k)<<endl;



// 2. Right Rotation by j
// Right totation means moving the 
    string s2="abcdefghijklm"; int j=2; int n=4;
    cout<<s.substr(n-j)+s.substr(0,n-j)<<endl;

    
    return 0;
}