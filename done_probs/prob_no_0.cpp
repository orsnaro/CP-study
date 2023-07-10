
// https://codeforces.com/contest/610/problem/B












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
deque <ll> dq;

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		ll mn = LONG_LONG_MAX;
		for (int i = 0; i < n; i++)
		{
			ll tmp; cin >> tmp;
			dq.push_back(tmp);
			mn = min(mn , tmp);
		}
		ll ans = n * (mn*1ll); // not to OF
		vector <int> pos;
		for (int i = 0; i < n; i++)
			if ( dq[i] - mn == 0 ){
				pos.push_back(i);
			}
		
		int mx = -1 ;
		for (int  i = 1; i < pos.size() ; i++)
			mx = max ( pos[i] - pos[i-1] - 1, mx);

		
		
		if ( mx > n + pos[0] - pos[pos.size() - 1]  - 1)
			ans += mx;
		else
			ans += n + pos[0] - pos[pos.size() -1] -1;

		cout << ans << '\n';
   }

   return 0;
}