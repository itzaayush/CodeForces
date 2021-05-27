#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0,s1=0,n,a,b;
    cin>>n;
    while (n>0)
    {
        cin>>a>>b;
        sum -= a;
        sum += b;
        s1 = max(sum,s1);
        n--;        
    }
    
    cout<<s1;
    return(0);
}