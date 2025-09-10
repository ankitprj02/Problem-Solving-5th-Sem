#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,w;
    cin>>n>>w;
    while (n--)
    {
        string arr[w];
        for (int i = 0; i < w; i++)
        {
            cin>>arr[i];
        }
        cout<<arr[0].length()<<" "<<arr[w-1].length()<<endl;
        
    }
    
    
    return 0;
}