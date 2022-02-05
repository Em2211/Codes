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
int f[2005];
bool chk(int x)
{
    int y=sqrt(x);
    return y*y==x;
}
 ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}   


unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

bool two (int x)
{
  /* First x in the below expression is for the case when x is 0 */
  return x && (!(x&(x-1)));
}
 
bool isSubsequence(string s, string t) {
    int sLen = s.length(), sIdx = 0, tLen = t.length();
    for (int i=0; i<tLen && sIdx<sLen; i++) 
        if (t[i]==s[sIdx]) sIdx++;
    return sIdx==sLen;
}
 
////////SOLVE
void solve()
{
	ll n;
	cin>>n;
	
	ll a[n];
	
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	
	for(int i=0;i<n-2;i++)
	{
		if(i%2==0)
		{
			a[i]+=1;
		}
		else
		{
			a[i]-=1;
		}
		
	}
	
	a[n-2]+=1;
	a[n-1]-=2;
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}
	



int main()
{
	BRUH
////#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	//freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	//freopen("output.txt", "w", stdout);
//#endif
 
	int t = 1;
	
	while (t--) {
		solve();
	}
 
	return 0;
}
