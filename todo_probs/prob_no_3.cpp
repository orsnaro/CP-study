// https://codeforces.com/contest/1873/problem/E
//tot time 33.5min~







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
		int n , x; cin >> n >> x;
		ll tot = 0;
		map <int , int> mp;
		for (size_t i = 0; i < n; i++)
		{
			ll tmp; cin >> tmp;
			mp[tmp]++;
			tot += tmp;
		}
		ll ans = 1;
		int minh = x/n;
		if ( minh == 0 ){
			for ( auto p : mp ){
				if ( x - p.S >= 0  ){
					ans ++;
					x = x - p.S;
				}else{
					break;
				} 
			}
		}else{
			ans += minh + (tot/n -1) ;
		}

		cout << ans << '\n';
	}     
	return 0;  
}
