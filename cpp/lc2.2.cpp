#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main()
{
	
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	
		ll l;
		int c=16,d=8,i;
		string s;
		
	    cin>>l;
		
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
		return 0;
		
	}

