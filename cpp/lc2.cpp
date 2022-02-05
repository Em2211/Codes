#include<bits/stdc++.h>
  
using namespace std;
  
int count( int S[], int n, int sum )
{
	    int i,j;
       
        int t[n+1][sum+1];
        for(i=0;i<=n;i++)
        {
            t[i][0]=1;
        }
        
        for(j=1;j<=sum;j++)
        {
        	t[0][j]=0;
		}
		
        
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=sum;j++)
            {
            	if( S[i-1]>j)
            	{
            		 t[i][j]=t[i-1][j];
				}
               
                
                else
                {
                    t[i][j]=t[i-1][j]+t[i][j-S[i-1]];
                }
            }
        }
        
        return t[n][sum];
    }



int main()
{
    int arr[] = {1, 2, 4,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 5;
    cout << count(arr, n, sum);
    return 0;
}
