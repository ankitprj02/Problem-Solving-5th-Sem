#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    //find the position of a given number in a vector
    vector<int> vec1={10,20,30,50};
    auto idx = find(vec1.begin(),vec1.end(),50)-vec1.begin();
    cout<<idx;
    return 0;
}
