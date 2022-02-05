#include<bits/stdc++.h>
using namespace std;
int f[2005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=2*n;i++){
		cin>>f[i];
	}
	int ans=2*n,k=0,t=0,i,j;
	for( i=1;i<=2*n;i++)
	{
		for( j=1;j<2*n;j++)
		{
			if(f[j]!=j)break;
		}
		
		if(j==2*n)
		{
			k=1;
			ans=min(ans,min(i-1,2*n-i+1));
		}
		
		
		if(t)
		{
			for(int j=1;j<2*n;j+=2)
			{
			swap(f[j],f[j+1]);
			}
		}
		else{
			
			for(int j=1;j<=n;j++){
			swap(f[j],f[n+j]);
			}
			
		}
		
		t=1-t;
	}
	if(k==0)
	{
		cout<<"-1"<<endl;
	}
	else cout<<ans<<endl;
	return 0;
} 
