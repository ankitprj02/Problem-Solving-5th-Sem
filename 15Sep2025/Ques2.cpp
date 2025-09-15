#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin >> n;
    int arr[n];
    string s[n];

    
        
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
            int k=arr[i];
            if(k>0){
                k=k%s[i].size();
                // right rotation
                cout<<s[i].substr(s[i].size() - k) + s[i].substr(0, s[i].size() - k)<<endl;
            }else{
                k=abs(k)%s[i].size();
                // left rotation
                cout<<s[i].substr(k) + s[i].substr(0, k)<<endl;
            }
        }
    

    return 0;
}