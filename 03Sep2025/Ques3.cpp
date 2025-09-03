#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a={1,2,3,1,2,1,3,4};
    int freq = count(a.begin(),a.end(),1);
    cout<<"Number of Ones :"<<freq;
    
    
    return 0;
}
