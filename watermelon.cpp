#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>2 and n%2==0)
    {
        cout<<"YES";
    }
    else if(n==2 || n%2!=0)
    {
        cout<<"NO";
    }
    return (0);
}