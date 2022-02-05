#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



 ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}   


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

 
	ll t;
	cin>>t;
	while(t--)
	{
		
		ll n;
		cin>>n;
		ll max=0;
		ll mi=0;
		ll a[n];
		ll b[n];
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
			if(a[i]>max)
			{
				mi=i+1;
				max=a[i];
			}
		}
		sort(b,b+n);
		
		if(mi==n)
		{
			
			for(int i=0;i<n;i++)
			{
				if(a[i]!=b[i])
				{
					ans=1;
					break;
				}
			}
			
			if(ans!=1) ans=0;
		}
		else if(mi==1)
		{
			if(a[n-1]==(n-1)) ans=2;
			else ans=3;
		}
		else
		{
			for(int i=0;i<mi;i++)
			{
				if(a[i]!=b[i])
				{
					ans=2;
					break;
				}
				
				
				
			}
			
			if(ans!=2) ans=1;
			
		}
		
		
		cout<<ans<<endl;
	}
 
 
	return 0;

}
	
