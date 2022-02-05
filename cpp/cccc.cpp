#include<bits/stdc++.h>
using namespace std;

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
    
    
int cp(string str)
{
    
    int len = str.length();
   
    // Traversing through the string
    // upto hlaf its length
    for (int i = 0; i < len / 2; i++) {
       
        // Comparing i th character
        // from starting and len-i
        // th character from end
        if (str[i] != str[len - i - 1])
            return false;
    }
   
    // If the above loop doesn't return then it is
    // palindrome
    return true;
}
 
// SOLVE HERE
void solve()
{
	
	int n;
	cin>>n;
	int am=0,bm=0;
	int ac=1,bc=0;
	int r=0;
	string s;
	cin>>s;
	
	for(int i=0;i<n;i++)
	{
		if(!cp)
		{
			if(r=0)
			{
				if(bc=1)
				{
					
					bc--;
					ac++;
					r=1;
				 } 
				else 
				{
					
					ac--;
					bc++;
					r=1;
					
				}
			}
			else
			{
				if(bc=1)
				{
					bm++;
					bc--;
					ac++;
					r=0;
				 } 
				else 
				{
					am++;
					ac--;
					bc++;
					r=0;
					
				}
				
			}
			
			
		}
		else
		{
			if(bc=1)
				{
					bm++;
					bc--;
					ac++;
					
				 } 
				else 
				{
					am++;
					ac--;
					bc++;
				
					
				}
			
		}
	}
	
	if(bm>am) cout<<"ALICE"<<endl;
	else if(bm==am) cout<<"DRAW"<<endl;
	else cout<<"BOB"<<endl;
	

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
 
	return 0;
}

