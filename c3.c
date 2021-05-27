#include <stdio.h>
#include <string.h>

int even[502][502];    // for number of even indexes at each point
int odd[502][502];    // for number of odd indexes at each point
int l[502][502];     // for storing length of longest pallingdrome at any point

char txt[505];
/*
  here identify longest pallingdrome subsequence and keep track of even indexes and odd indexes occuring
  if even more first person wins else vice versa;
  DP o(n2) silly mistakes :/
*/

void compute()
{
    char text[1000];
	int i,j,c;
	int len;
    scanf("%d",&len);
	len=strlen(txt);
    scanf("%c",&text);
	for(i=0;i<len;i++)   
	{
		l[i][i]=1;
		if(i&1)   {   odd[i][i]=1;   even[i][i]=0; }
		else     {  even[i][i]=1;   odd[i][i]=0; }
	}
	
//	printf("\n%d %d %d %d\n",even[0][0],even[1][1],odd[0][0],odd[1][1]);
	
	for(c=2;c<=len;c++)     // c is for length of substrings
	{
		for(i=0;i<(len-c+1);i++)
		{
			j=i+c-1;
			if(txt[i]==txt[j] && c==2)
			{
				l[i][j]=2;
				even[i][j]=1;    odd[i][j]=1;
			}
			else if(txt[i]==txt[j])
			{
				l[i][j]=l[i+1][j-1]+2;
				if(i&1) {  odd[i][j]=odd[i+1][j-1]+1;  even[i][j]=even[i+1][j-1]; }
				else  { odd[i][j]=odd[i+1][j-1];  even[i][j]=even[i+1][j-1]+1; }
				if(j&1) { odd[i][j]=odd[i][j]+1;   }
				else  {   even[i][j]=even[i][j]+1; }
				//if(i==0 && j==10) { printf("\n%d %d %d %d\n",even[0][10],even[1][9],odd[0][10],odd[1][9]);  }
				
			}
			else if(txt[i]!=txt[j])
			{
				if(l[i+1][j]>l[i][j-1])
				{
					l[i][j]=l[i+1][j];
					 odd[i][j]=odd[i+1][j];  even[i][j]=even[i+1][j]; 
					
				}
				else 
				{
					l[i][j]=l[i][j-1];
					 odd[i][j]=odd[i][j-1];  even[i][j]=even[i][j-1]; 
					
				}
				/*else if(l[i+1][j]==l[i][j-1])
				{
					//we need lexicographically smaller one -_-
					if(txt[i]<=txt[j])
					{
						l[i][j]=l[i][j-1];
						odd[i][j]=odd[i][j-1];  even[i][j]=even[i][j-1];
					}
					else 
					{
						l[i][j]=l[i+1][j];
						odd[i][j]=odd[i+1][j];  even[i][j]=even[i+1][j];
					}
				} */
			}
		}
	}
	
	//printf("\n%d %d %d",even[0][len-1],odd[0][len-1],l[0][len-1]);
	
	if(even[0][len-1]>odd[0][len-1])   printf("Gopu\n");
	else if(odd[0][len-1]>even[0][len-1])  printf("Dholu\n");
	else  printf("Draw\n");
	return;
}

int main(void) {
	// your code goes here
    // int t;
    // scanf("%d",&t);   getchar();
    // while(t--)
    // {
        	int cases;
	    scanf("%d",&cases);   getchar();
	    while(cases--)
	    {
		    
		    compute();
	    }   

    

	
	
	return 0;
}
