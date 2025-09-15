#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int A=0,B=0,C=0,D=0;
    for (int i=0;i<s.size();i++)
    {
         if(isalpha(s[i])){
            if(isupper(s[i])){
                A+=1;
            }else{
                B+=1;
            }
         }else if(isdigit(s[i])){
           C+=1;
         }else{
            D+=1;
         }
    }

    cout<<A*B+C*D<<endl;
    
    
    return 0;
}