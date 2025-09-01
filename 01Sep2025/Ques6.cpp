#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M;
    cin>>N>>M;
    string arr[M];
    while(N--){
        for (int i = 0; i < M; i++)
        {
            cin>>arr[i];
        }
        int first = arr[0].length();
        int last = arr[M-1].length();
        cout<<first<<" "<<last<<endl;

    }                
    return 0;
}
