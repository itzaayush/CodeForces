#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,t;
    string str;
    int i ;
    cin>>n>>t;
    cin>>str;
    while (t--)
    {
        for(i=1;i<n;i++)
        {
            if(str[i]=='G' && str[i-1]=='B')
            {
                str[i]='B';
                str[i-1]='G';
                i++;
            }
        }
    }

    

    cout<<str;
    return(0);
}