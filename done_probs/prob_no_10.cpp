// https://codeforces.com/contest/492/problem/B



#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);

#define F first
#define S second
using ll = long long;
const int N = 2e5 + 5, M = INT_MAX;
const ll LM= LONG_LONG_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable when using 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n; 
		ll l; cin >> l;
		vector <ll> v;
		for (int i = 0; i < n; i++){
			ll tmp; cin >> tmp;
			v.push_back(tmp);
		}
		sort( v.begin() , v.end() );
		double ans = -1;

		for (int i = 0; i < n - 1; i++)
			ans = max(ans , (v[i  + 1] - v[i]) / double(2) );
		
		auto it = find(v.begin() , v.end() , 0);
		if ( it == v.end() )
			ans = max (ans , double(v[0]));

		it = find(v.begin() , v.end() , l);
		if ( it == v.end() )
			ans = max(ans , double(l - v[n - 1]));
		
		cout << fixed << setprecision(10) << ans << '\n';
   }
   return 0;
}