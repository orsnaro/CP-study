// https://codeforces.com/contest/1873/problem/E
//tot time 33.5min~ (memory was OF -> BS worked approach!)







// #include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define Txtio   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);

#define F first
#define S second
using ll = long long;
using ull = unsigned long long;
const ll LM = LONG_LONG_MAX;
const int N = 2e5 + 5, M = INT32_MAX;
// int arr[N];
bool ok( ll h , int x , vector<int> &v ){
	ll sm = 0;
	for ( auto &t : v )
		sm += max ( 0ll  , h - t );
	
	bool ok;
	sm > x ? ok = false : ok = true;
	return ok;
}

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n , x; cin >> n >> x;
		vector <int> v(n);
		for (size_t i = 0; i < n; i++)
			cin >> v[i];
		

		int l = 0;
		int h = M;
		ll ans = 0;
		while ( l <= h ){
			ll m = (l*1ll + h*1ll + 1ll) / 2;

			if ( h - l <= 4 ){
				for ( int i = l; i <= h; i++ ) if ( ok(i, x, v) )	ans = i;

				break;
			}

			if (!ok(m, x, v)) h = m - 1;
			else { ans = m; l = m + 1; }
		}
		cout << ans << '\n';
	}     
	return 0;  
}
