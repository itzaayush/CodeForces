#include<bits/stdc++.h>
using namespace std;

int main()
{
  
    int n,a;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }

    for(int i=0 ;i<n;i++)
    {
        
        if(str[i].length()>10)
        {
            cout<<str[i][0]<<str[i].length()-2<<str[i][str[i].length()-1]<<endl;
        }
        else
        {
            cout<<str[i]<<endl;
        }
    }
    return(0);
}