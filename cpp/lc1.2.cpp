#include<bits/stdc++.h>

typedef unsigned long long ll;
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	
	vector<int> v;
	v.push_back(3);
	v.push_back(-1);
	v.push_back(0);
	v.push_back(2);
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
		return 0;
	}
