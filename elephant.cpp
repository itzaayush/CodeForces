#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,c=0,s,a;
    cin>>x;
    s = x/5;
    if(x%5!=0)
    {
        s++;
    }
    cout<<s;
    
    return(0);
}