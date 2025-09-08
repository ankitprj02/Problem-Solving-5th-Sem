#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n],sum=0;;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}
