// https://codeforces.com/contest/768/my




#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5, M = 1e9;
// int arr[N];
vector <ll> v;
map <ll , int> mp;

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		set <ll> st;
		for (size_t i = 0; i < n; i++)
		{
			ll tmp; cin >> tmp;
			if ( mp.find(tmp) != mp.end() )
				mp[tmp]++;
			else
				mp[tmp] = 1;

			st.insert(tmp);
		}
		for ( auto &x : st)
			v.push_back(x);

		int ans = 0;
		int sz = v.size();
		for (ll i = 1; i < v.size() - 1; i++)
		{
				ans += mp[v[i]];
		}

		cout << ans << '\n';
   }

   return 0;
}