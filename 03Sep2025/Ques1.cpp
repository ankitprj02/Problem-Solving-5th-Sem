#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> arr(5,10); // vector initialize of length 5 having 10 value each
    arr.push_back(40); // this line to add 40 at the end of vector
    for (int i :arr)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
