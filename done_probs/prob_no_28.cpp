




// https://codeforces.com/contest/1856/problem/B
// 3.5m read - 9.5m think - 3m code - 10m debug - 2nd submit - alone









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
   cin >> t;
   while (t--) {
		ll sm = 0;
		int m = 0;
		int n; cin >> n;
		for (size_t i = 0; i < n; i++)
		{
			int tmp; cin >> tmp;
			sm += tmp - 1;
			m += (tmp > 1 ? 1 : 0);
		}
		cout << (sm >= n - m and n > 1 ? "YES" : "NO") << '\n';
   }     
	return 0;  
}

