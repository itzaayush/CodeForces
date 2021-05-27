#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i;
    int j,flag=0;
    cin>>str;
    int n,m=0,o=1;
    n=str.length();
    char cur = str[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                m++;
            }
        }   
            if(m==0)
            {
                o++;
            }
            m=0;
       
    }

    if(o%2!=0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return(0);
}