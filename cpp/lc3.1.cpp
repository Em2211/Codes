#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
   	
	cin>>t;
	
	while(t--)
	{
	    
	   
	   	ll n,i,j,f=0,c=0,m=INT_MAX;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			m=min(m,a[i]);		
		}
		
	
		
		for(i=0;i<n;i++)
		{
			if(a[i]==m)
			{
				c++;
				break;
			}
			
			if(a[i]>a[i+1])
			{
				f++;
				if( a[i+1]==m)
				{
					c++;
					break;
				}
			}
		}
		
		if(c==1 && f<2 )
		{
			cout<<"YES"<<endl;
			cout<<f<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
		
		
		
		
	   }
	   
	   


return 0;
	   
}
	   
	   
	   
	   	   
	   
	   
