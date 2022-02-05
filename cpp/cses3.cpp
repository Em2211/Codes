#include<bits/stdc++.h>
      
using namespace std;
typedef long long ll;

	 
int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin >>s;
	ll l,i,j,count,max=1;
	char c;
	
	l=s.length();
	for(i=0;i<(l-1);)
	{
		c=s.at(i);
		count=1;
		for(j=i+1;j<l;j++)
		{
			if(c==s.at(j))
			count++;
			else
			break;
		}
		
		if(count>=max)
		max=count;
		
		i=i+count;
	}
	
	cout<<max<<endl;
	return 0;
	}
