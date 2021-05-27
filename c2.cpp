#include<bits/stdc++.h>
using namespace std;


int n,i,j;
int cur ;

vector<long long> solve(long long n)
{
    vector<long long> ans;
    long long p=1;
    while(n>0)
    {
        if(n&1)
        {
            ans.push_back(p);
        }
        n>>=1;
        p*=2;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> v= solve(n);
        int l = v.size();
        cout<<v[l-1]-1<<endl;

    }
    return 0;
}