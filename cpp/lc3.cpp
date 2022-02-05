#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
   int n; cin>>n;
   int a,b,c,d;
   do n=n+1, a=n/1000, b=(n/100)%10, c=(n/10)%10, d=n%10;
   while (a==b||a==c||a==d||b==c||b==d||c==d);
   cout<<n;
	
	return 0;
}
	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
	
