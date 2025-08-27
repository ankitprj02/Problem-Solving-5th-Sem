#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,codd=0,ceven=0;
    cin>>n;

    // //method 1
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]%2==0){
    //         ceven+=1;
    //     }else{
    //         codd+=1;
    //     }
    // }

    // if(codd>ceven){
    //     cout<<"Odd";
    // }else{
    //     cout<<"Even";
    // }


    //method 2
    cin>>n;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        if(t/2==0){
            ceven+=1;
        }else{
            codd+=1;
        }
    }

    if(codd>ceven){
        cout<<"Odd";
    }else{
        cout<<"Even";
    }

    
    

    
    
    return 0;
}