

// https://codeforces.com/contest/1851/problem/B




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
const ll LM= LONG_LONG_MAX;
const int N = 2e5 + 5, M = INT32_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n; cin >> n;
		int arr[n]{} , sorted[n]{};
		for (size_t i = 0; i < n; i++)
		{
			int tmp; cin >> tmp;
			arr[i] = tmp; sorted[i] = tmp;
		}

		sort(sorted , sorted + n);

		bool can = true;
		for (int i = 0; i < n; i++)
		{
			if ( arr[i] % 2  == sorted[i] % 2) continue;
			else{can = false; break;}
		}
		cout << (can ? "YES" : "NO") << '\n';
   }
   return 0;
}