#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t;

	
	cin>>t;
	
	while(t--)
	{
		ll n,k,d,i,isum=0,sum,ans;
		
		cin>>n>>k>>d;
		ll a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sum= accumulate(a, a+n, isum); 
		if(sum>=k)
		{
			ans=sum/k;
			if(ans>d)
			{
				cout<<d<<endl;
			}
			else{
				cout<<ans<<endl;
			}
			
			
		}
		else
		{
			cout<<0<<endl;
		}
		
		
}
 return 0;
 
 }
