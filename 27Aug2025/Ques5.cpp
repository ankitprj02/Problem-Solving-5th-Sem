#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    int n;
    while (t--)
    {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
        }
        int max1 = *max_element(arr, arr + n);
        int min1 = *min_element(arr, arr + n);
        int total = accumulate(arr,arr+n,0);
        float avg = (float)total/n;

        cout << max1 << " " << min1 << " " << total << " " << avg << endl;

    
    }
    return 0;
}