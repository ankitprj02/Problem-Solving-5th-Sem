#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int dig;
        string type;
        cin>>dig>>type;
        if(type=="INT"){
            int arr[dig], sum=0;
            for (int i = 0; i < dig; i++)
            {
                cin>>arr[i];
                sum+=arr[i];
            }
            cout<<sum<<endl;
            

        }
        else{
            int len=0;
            string w;
            for (int i = 0; i < dig; i++)
            {
                cin>>w;
                if(len<w.size()){
                    len=w.size();
                }    
            }
            cout<<len<<endl; 
        }
    }
    
    return 0;
}
