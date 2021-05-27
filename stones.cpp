#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
	cin>>s;
    int i,count=0;
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
    }
    cout<<count<<" ";
    return(0);
}