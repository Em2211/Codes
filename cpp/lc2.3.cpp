#include<bits/stdc++.h>
#include<string.h>
typedef unsigned long long ll;
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
		
		ll l;
		int i,c=16,d=8;
		cin>>l;
		
		string s;
		getline(cin,s);
		
		for(i=0;i<l;i++)
		{
		  
		  if(s[i]=='0')
		  {
			  c-=d;
		
		  }
		
		 d=d/2;
	   }
	   
	   
	   cout<<char(c+96);
}

return 0;
}

