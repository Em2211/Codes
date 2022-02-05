#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n,q,i,j,t;
	cin >>n>>q;
	int a[n];
	
	map<int , int> m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(m[a[i]]==0) m[a[i]]=i+1;
		
	}
	
	while(q--)
	{
		cin>>t;
		int c=m[t];
		cout<<m[t]<<" ";
		m.erase(t);
		for( auto i: m)
		{
			if(i.second<c)
			{
				m[i.first]=i.second+1;
			}
		}
		
		mp[t]=1;
	}
	
  return 0;
}
