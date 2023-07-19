

// https://www.codechef.com/START99D/problems/ONEFROMK


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
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		vector < ll > v;
		ll sum[n + 5]  = {};
		for (int i = 0; i < n; i++){
			ll tmp; cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin() , v.end()  , greater<ll>());
		

		sum[0] = v[0];
		for (int i = 1; i < n; i++)
			sum[i] = v[i] + sum[i-1];
		

		for (int i = 0; i < n; i++)
		{
			cout << sum[n-i -1]  << ' ';
		}
		cout << '\n';
   }
   return 0;
}