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
		ll N,K,x,y,d,m;
		cin>>N>>K>>x>>y;
		
		
		d=abs(x-y);
		if(d==0)
		{
			cout<<N<<" "<<N<<endl;
		}
		else
		{
			m=K%4;
			
			if(x>y)
			{
				if(m==1)
			    cout<<N<<" "<<(N-d)<<endl;
			    if(m==2)
			    cout<<(N-d)<<" "<<N<<endl;
			    if(m==3)
			    cout<<0<<" "<<d<<endl;
			    if(m==0)
			    cout<<d<<" "<<0<<endl;
				
			}
			
			else
			{
				if(m==1)
			    cout<<(N-d)<<" "<<N<<endl;
			    if(m==2)
			    cout<<N<<" "<<(N-d)<<endl;
			    if(m==3)
			    cout<<d<<" "<<0<<endl;
			    if(m==0)
			    cout<<0<<" "<<d<<endl;
			}
			
			
		}
		
	}
	
	return 0;
}

