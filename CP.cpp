// prob: https://codeforces.com/contest/682/problem/A
#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5, M = 1e8;

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
	


   while (t--) {
	ll n; cin >> n;
	ll m; cin >> m;
	vector <ll> a(5 ,0) , b(5,0);

	for (size_t i = 1; i <= n; i++)
		a[ (i) % 5]++;
	for (size_t i = 1; i <= m; i++)
		b[ (i) % 5]++;

	ll ans = a[0] * b[0];
	for (size_t i = 1; i <=4; i++)
	{
		ans += a[i] * b[ 5 - i ];
	}
		cout << ans << '\n';

   }

   return 0;
}//done 