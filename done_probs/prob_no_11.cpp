

// https://codeforces.com/contest/1850/problem/D

#include <bits/stdc++.h>
// #include <stdio.h>
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
   cin >> t;
   while (t--) {
		int n; cin >> n;
		ll k; cin >> k;
		
		vector<ll> v;
		for (int i = 0; i < n; i++)
		{
			ll tmp; cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin() , v.end());

		vector<ll> v2(1 , 0);
		for (int i = 0; i < n - 1; i++)
		{
			ll diff = v[i +1] - v[i];
			if (diff <= k){
				v2[v2.size() - 1] ++;
			}else{
				v2.push_back(0);
			}
		}

		ll mx = -1;
		for( auto &x : v2){
			mx = max(mx , x);
		}
		cout << n - mx - 1 << '\n';
		




   }
   return 0;
}