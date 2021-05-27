#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=0,n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        if(str[i][1] == '+')
        {
            a++;
        }
        else if(str[i][1] == '-')
        {
            a--;
        }
    }

    cout<<a<<endl;

    return(0);   
}