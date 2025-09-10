#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Given two string S1 and S2 , an integer n gives out as given below
    // S1 = Quick brown  ,  S2=#  , n=2  
    // Output = Qu#ck#br#ow#n
    
    string s1,s2; int n;
    getline(cin,s1);
    cin>>s2;
    cin>>n;
    string emptystr="";
    int cnt=0;

    

    for ( int i = 0; i < s1.size(); i++)
    {
        cnt++;
        if(cnt==n+1){
            emptystr+=s2;
            cnt=0;
        }
        emptystr+=s1[i];
        
    }
   cout<<emptystr<<endl;
    
    
   return 0;
}