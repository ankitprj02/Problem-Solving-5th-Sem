#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,ans="",sp="";
    cin>>s;
    for (int i=0;i<n;i++)
    {

         if(isalpha(s[i])){
            ans+= tolower(s[i]); // --> tolower(s[i]) gives integer value 
            // ans = ans + char(tolower(s[i]));
         }else if(isdigit(s[i])){
            ans = ans+s[i];
         }else{
            sp = sp+s[i];
         }
    }

    cout<<ans+sp<<endl;
    
    
    return 0;
}