#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec1={10,20,30,50,60,70,80,90};
    vector<int> vec2(vec1.begin()+2,vec1.end())+5;
    for (int i:vec1)
    {
        cout<<"Vector 1: "<<i;
    }
    
    
    
    return 0;
}
