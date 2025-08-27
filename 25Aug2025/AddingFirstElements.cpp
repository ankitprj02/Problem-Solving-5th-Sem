#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i <N; i++)
    {
        cin>>arr[i];
    }

    int first2 = arr[0]+arr[1];
    int last2 = arr[N-1]+arr[N-2];
    cout<<first2<<endl<<last2;
    
    
    


    return 0;
}
