#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // method 1
    int n,t;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
    
        cin>>t;
        arr.push_back(t);
    }



    //method 2
    int n,t;
    cin>>n;
    vector<int> arr[n];
    for (int i = 0; i < n; i++){
    
        cin>>arr[i];
    }
    
    
    return 0;
}
