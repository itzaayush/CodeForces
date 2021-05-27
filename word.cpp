#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100000];
    int d=0,e=0,c=0;
    cin>>a;
    int b;
    b=strlen(a);
    for(int i=0;i<b;i++)
    {
        if(isupper(a[i]))
        {
            d++;
        }
        else if(islower(a[i]))
        {
            e++;
        }
    }

    for(int i=0;i<b;i++)
    {
        if(d>e)
        {
            a[i]=toupper(a[i]);
        }
        else if(d<=e)
        {
            a[i]=tolower(a[i]);
        }

    }

    

    cout<<a;
    return(0);
}