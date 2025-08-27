#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,X;
    cin>>N>>X;
    int num = N*X;
    if(10000<=num && num<=99999){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
   
    return 0;
}