#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define inf 1e20
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORe(i,a,b) for(int i=a;i<=b;i++)
#define print(a,n) for(int i=0;i<n;i++) cout << a[i] << " ";
#define BRUH ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
const int mod = 1e9 + 7;
 
bool chk(int x)
{
    int y=sqrt(x);
    return y*y==x;
}


 int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}   
    
    
ll fib(ll n, ll a,ll b)
{
   if (n == 0)
      return a;
    if(n==1) return b;
   return fib(n-1,a,b) ^ fib(n-2,a,b);
}


bool pos(ll n , ll y)
{
	if((y-1)%n==0)
	{
		return 1;
	}
	else return 0;
}
 
 
 
 
 //count pair whose sum is in [a, b]
//arr is a sorted array with size integers.
ll countPair(ll arr[], ll size, ll a, ll b) {
    ll cnt = 0;
    ll i = 0, low = size-1, high = size-1;
    while (i < high) {
        
         low = max(i, low);
         while (low > i && arr[i] + arr[low] >= a) --low;

        
        while (high > low && arr[i] + arr[high] > b) --high; 
        
        cnt += (high-low);
        ++i;
    }
    return cnt;
}
// SOLVE HERE
void solve()
{
	ll n;
	cin>>n;
	
	ll a[n];
	ll a2[2*n+1];
	ll c=0;
	
	for(int i=0;i<=2*n;i++)
	{
		a2[i]=INT_MAX;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a2[a[i]]=i+1;
	}
	
	for(int i=3;i<2*n;i++)
	{
		for(int j=1;j<=sqrt(i);j++)
		{
			if(i%j==0 and i!=j*j)
			{
				if(a2[j]+a2[i/j]==1)c++;
			}
		}
	}
	
	
	
	
	cout<<c<<endl;
	
	
	
}




 
 
int main()
{
	BRUH
//#ifndef ONLINE_JUDGE
	//for getting input from input.txt
//	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
//	freopen("output.txt", "w", stdout);
//#endif
 
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
		
	}
}
