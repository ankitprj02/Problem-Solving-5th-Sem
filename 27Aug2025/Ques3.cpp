#include<bits/stdc++.h>
using namespace std;
int main(){

    // int arr[7]={10,200,30,40,500,89,100};
    // int sum1 = accumulate(arr,arr+7,0);
    // int sum2 = accumulate(arr,arr+3,0);
    // int sum3 = accumulate(arr+1,arr+3,0);

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int half = n/2;
    int sum1 = accumulate(arr,arr+half,0);
    int sum2 = accumulate(arr+half,arr+n,0);
    if(sum1>sum2){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    




    


    return 0;
}
