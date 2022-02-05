#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll n,a1,a2,k;
	cin>>n;

    for(k=1;k<=n;k++)
	{
    	a1=k*k;
    	a2=a1*(a1-1)/2;
    	if(k>2)
    	{
    		a2-=4*(k-1)*(k-2);
    		
		}
    	cout<<a2<<endl;
    }
    return 0;
    	
	}
