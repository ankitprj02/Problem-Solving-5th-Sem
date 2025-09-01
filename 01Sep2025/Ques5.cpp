#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M;
    cin>>N>>M;
    int middleSum=0;
    while (N--){
        int arr[M];
        int middleIndex = M/2;
        for (int i = 0; i < M; i++){
           cin>>arr[i];
        }
        middleSum+=arr[middleIndex]; 
    }
    cout<<middleSum<<endl;                  
    return 0;
}
