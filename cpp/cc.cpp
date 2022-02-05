#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ff first
#define ss second
#define int long long
#define pb push_back
#define inf 1e20
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORe(i,a,b) for(int i=a;i<=b;i++)
#define print(a,n) for(int i=0;i<n;i++) cout << a[i] << " ";
#define BRUH ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 #define MAX 10000
 

// SOLVE HERE
void solve()
{
    
    int n;
    cin>>n;
    
    map<int,int> m;
    
    int a[n];
    int ans=0;
    
    for(int i=0;i<n;i++){
    	
    	
    	cin>>a[i];
    	m[a[i]]++;
	}
	
	for(int i=0;i<n;i++)
	{
		if(m[a[i]]==1) ans++;
		else if ( m[a[i]]>1)ans+=2;
	}
	
	
	cout<<ans<<endl;
	
	
    
    

}
 
 
int32_t main()
{
    BRUH
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);  
#endif
 
    //int t = 1;
    int t;
    cin >> t;
    while (t--)
     {
        
        solve();
        
    }
}
 
