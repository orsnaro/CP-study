// https://codeforces.com/contest/266/problem/A

#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5, M = 1e9;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
      int n;
      cin >> n;
      int ans = 0;
      string s;
      cin >> s;

      for (int i = 1; i < n; i++) 
			 if ( s[i] == s[i - 1])
				ans ++;

	cout << ans << '\n';
   }

   return 0;
}