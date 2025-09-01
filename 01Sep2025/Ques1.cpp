#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    string status;
    int marks;
    int above75=0;
    int below50 =0;
    while(N--){
        cin>>status;
        cin>>marks;
        if(marks>75){
            above75+=1;
        }else if(marks<50){
            below50+=1;
        }

    }
    cout<<above75<<" "<<below50;
    return 0;
}
