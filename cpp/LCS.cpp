#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void lcs(string x, string y, int m, int n)
{
	string s;
	int i,j;
	int t[101][101];
	
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			{
				t[i][j]=0;
			}
			else
			{
				if(x[i-1]==y[j-1])
				{
					t[i][j]=t[i-1][j-1]+1;
				}
				else
				{
					t[i][j]=max(t[i][j-1],t[i-1][j]);
				}
			}
		}
	}
	

	while(m>0 && n>0)
	{
		if(x[m-1]==y[n-1])
		{
			s.push_back(x[m-1]);
			m--;
			n--;
			
		}
		else
		{
			if(t[m-1][n]>t[m][n-1])
			{
				m--;
			}
			else
			{
				n--;
			}
		}
	}
	
	reverse(s.begin(), s.end());
	cout<<s<<endl;

}

int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
  string X= "AGGTAB";
  string Y = "GXTXAYB";
  int m = X.length();
  int n = Y.length();
  lcs(X, Y, m, n);
  return 0;

}
	  
	  
	  
	  
	  
	  
	  
