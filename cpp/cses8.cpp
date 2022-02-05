#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long int li;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);   
   
   
   
   
    ll n;
    cin >> n;
    ll total = n * (n + 1) / 2;
    if (total%2!=0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<ll> arr1, arr2;
        total /=2 ;
        while (n)
        {
            if (total - n >= 0)
            {
                arr1.push_back(n);
                total -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (li ele=0; ele < arr1.size();ele++)
            cout << ele << " ";
        cout << endl;
        cout << arr2.size() << endl;
        for (li ele=0; ele<arr2.size();ele++)
            cout << ele << " ";
    }
    return 0;
}
