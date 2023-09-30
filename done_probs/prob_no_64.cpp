// https://codeforces.com/contest/1875/problem/0






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

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		ll a , b , n; cin >> a >> b >> n;

		// stack <int> s;
		ll ans = b - 1;
		for (int i = 0; i < n; i++)
		{
			int tmp; cin >> tmp;
			ans += min(tmp*1ll + 1, a*1ll) - 1;
			// s.push(min(tmp*1ll  , a*1ll));
		}
		cout << ans + 1 << '\n';
		// while( b-- ){
		// 	ans++;
		// 	if ( b == 0 and !s.empty() ){
		// 		b = min(b + s.top() , a);
		// 		s.pop();
		// 	}
		// }
		// cout << ans - 1 << '\n';
	}   
	return 0;  
}
