#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 1; i < row-2; i++)
    {
        for (int j =1; j < col-2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }



    
    return 0;
}
