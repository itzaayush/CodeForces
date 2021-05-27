

 
#include <iostream>
using namespace std;
 

int getCount(int rows,int columns, int A[][2])
{
    int res = 0;
    int aa,bb;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) 
        {
            aa=A[i][0] *A[j][1];
            bb=A[i][1] * A[j][0];
            if (aa==bb) 
            {
                res++;
                
            }
        }
    }
    return res;
}
 

int main()
{

    int c;
    int n;
    cin>>n>>c;
    int i,A[n][2],j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>A[i][j];
        }
    }
 
    cout << getCount(n, c, A);
 
    return 0;
 
}