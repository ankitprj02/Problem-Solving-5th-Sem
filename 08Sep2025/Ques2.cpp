#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int N,M;
    cin>>N>>M;
    while (N--)
    {
        int arr[M];
        for (int i = 0; i < M; i++)
        {
            cin>>arr[i];
        }
        int sum = accumulate(arr,arr+M,0);
        int max = *max_element(arr, arr + M);
        int min = *min_element(arr, arr + M);

        cout<<sum<<" "<<max<<" "<<min<<endl;
    
    }
    
    
    return 0;
}
