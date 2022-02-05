#include<bits/stdc++.h>
#include <vector>
typedef long long ll;
using namespace std;
const int M=1e9+7;


ll modfun(ll a,ll b)
{
	ll res=1;
	
	
	while(b>0)
	{
		if(b&1)
		{
			a=a%M;
			res=(res*a)%M;
			res=res%M;
		}
		
		b=b>>1;
		a=a%M;
		a=(a*a)%M;
		a=a%M;
		
	}
	
	return res;
}

int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
  ll test;
  cin>>test;
  
 	while(test--)
	{
	  ll n;
	  cin>>n;
	  
	  if(n==1) cout<<1<<"\n";
	  else
	  {
	  	
	  n=n-1;
	  ll ans;
	  ll a=2;
	  ans= modfun(a,n)%M;
	  
	  ans=(ans)%M;
	  cout<<ans<<"\n";
    }   
	  
	  
	  


}


	
	
	
		

return 0;
}
