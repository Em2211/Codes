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
    int n,h;
    cin>>n>>h;
int a[n];
int mid,sum;
    for(int i=1;i<=n;i++) cin>>a[i];
    int l=1,r=h;

while(l<r)
{
    mid=(l+r)/2;
    sum=0;

    for(int i=1;i<n;i++)
    {
        if(a[i+1]-a[i]>mid) sum+=mid;
        else sum+=a[i+1]-a[i];
    }
    sum+=mid;
    if(sum<h) l=mid+1;
    else r=mid;
}

cout<<l<<endl;
    

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
 