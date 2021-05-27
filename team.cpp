#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i , j;
    cin>>n;
    int a[n][3],count=0,sum;
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    for ( i = 0; i < n; i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum += a[i][j];
        }
        if(sum>1)
        {
            count++;
        }
    }

    cout<<count;

    
    return(0);
}