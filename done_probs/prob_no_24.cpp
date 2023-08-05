// https://codeforces.com/problemset/problem/579/A





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
		int ans = __builtin_popcount(n);
		cout << ans << '\n';
   }     
	return 0;  
}


