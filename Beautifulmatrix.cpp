#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6],i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            if(a[i][j]==1)
            {
                int c,b;
                b=abs(3-i);
                c=abs(3-j);
                cout<<c+b;
            }    
        }
    }

    
    return(0);
}