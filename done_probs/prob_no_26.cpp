// https://codeforces.com/problemset/problem/1097/B
//iterative style (bitmasking)
// 5m reading - 12m think - 10m coding - 3.5m debug - 1st submit - alone

// #include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);

#define F first
#define S second
using ll = long long;
using ull = unsigned long long;
const ll LM = LONG_LONG_MAX;
const int N = 2e6 + 5, M = INT32_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		constexpr int mx = 15;
		vector<int>v;
		for (int i = 0; i < n; i++)
		{
			int tmp; cin >> tmp;
			v.push_back(tmp);
		}
		int ans = 0;
		for (int msk = 0; msk < (1 << n) ; msk++)
		{
			bitset<mx> b(msk);
			for (int j = 0; j < n; j++)
			{
				if(b[j])ans += v[j];
				else ans -= v[j];
			}
			if ( !(ans % 360) ){cout << "YES" << '\n'; return 0;}
			ans = 0;
		}
		cout << "NO" << '\n';
   }     
	return 0;  
}


