#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mod=1000000007;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
 
/*bool sq(int x){
  int i;
  for(i=1;i*i<=x;i++){
 
  }
  i--;
  if(i*i==x){
    return 1;
  }
  else return 0;
}*/


void solve(){
    int n,m,x;
    cin>>n>>m>>x;
    int h[n];
    for(int i=0;i<n;i++){
      cin>>h[i];
    }
    set<pair<int,int>>st;
	set<pair<int,int>>st1;
    for(int i=0;i<n;i++)
	{
    	  st.insert({h[i],i});
    }
    
    int rem=n-m;
    
    while(rem--){
      pair<int,int>p1=*(st.begin());
      st.erase(st.begin());
      st1.insert(p1);
    }
    
    
    set<pair<int,int>>::reverse_iterator rit;
 
    int res[n];
    int c=1;
    
    for(auto y:st)
	{
        res[y.second]=c++;
    }
    
    
    for (rit = st1.rbegin(); rit != st1.rend(); rit++)
	{
        pair<int,int>p1=*(st.begin());
        st.erase(st.begin());
        
        res[(*rit).second]=res[p1.second];
        st.insert({p1.first+(*rit).first,p1.second});
    }
    
    /*auto it=st.end();
    it--;
    if(it->first-(*st.begin()).first>x){
      cout<<"NO";
    }
    else{*/
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
      }
    
    cout<<endl;
}

int32_t main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      // srand(time(0));
      int t;
      cin>>t;
      //   t=1;
      while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
      }
      return 0;
}
