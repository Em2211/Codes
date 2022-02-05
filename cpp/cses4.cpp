#include<bits/stdc++.h>
      

typedef long long ll;

using namespace std; 
int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,j,i,c=0;
    
	cin>> n;
	ll a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		j=i+1;
		if(a[j]<a[i])
		
		{
			
			while(a[j]<a[i])
			{
				a[j]=a[j]+1;
				c++;
			}
			
			
		}
	}
		cout<<c<<endl;
		return 0;
	}
