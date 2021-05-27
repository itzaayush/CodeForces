#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
         cin>>n;
        while(n--)
    {
        string s;
        cin.ignore();
        cin>>s;
        vector<vector<int> > a(s.length(),vector<int>(s.length(),0));
        long long n=s.length();
        for(long long i=0;i<s.length();i++)
        {
            a[i][i]=1;
        }
        for(long long i=2;i<=n;i++)
        {
           for(long long j=0;j<(n-i+1);j++)
           {
               long long k=j+i-1;
               if(s[k]==s[j])
               {
                   if(k==(j+1))
                    a[j][k]=2;
                   else
                    a[j][k]=2+a[j+1][k-1];
               }
               else a[j][k]=max(a[j][k-1],a[j+1][k]);
           }
        }
        //cout<<a[0][s.length()-1]<<endl;
        long long golu=0,dholu=0;
        long long i=0;
        long long j=(n-1);
        while(i!=j)
        {
            if(a[i][j]!=a[i][j-1]&&a[i][j]!=a[i+1][j])
            {
                if(i&1)
                    dholu++;
                else
                    golu++;
                if(j&1)
                    dholu++;
                else
                    golu++;
                i=i+1;
                j=j-1;
            }
            else if(a[i][j]==a[i][j-1])
            {
                j=j-1;
            }
            else
                i=i+1;

        }
        if((i&1))
            dholu++;
        else golu++;
        //cout<<dholu<<" "<<golu<<endl;
        if(dholu>golu)
            cout<<"AlICE\n";
        else if(golu>dholu)
            cout<<"BOB\n";
        else
            cout<<"Draw\n";
    }
    }
}
