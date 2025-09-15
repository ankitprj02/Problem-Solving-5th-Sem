#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string w;
        cin>>w;
        int wlength = w.length();
        for (int i = 0; i < wlength; i++)
        {
            if(i==0 || i==wlength-1){
                cout<<w[i];
            }
        }
        cout<<endl;
        
        
    }
    
    
    return 0;
}