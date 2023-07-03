// prob: https://codeforces.com/contest/225/problem/A
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
	int n; cin >> n;
	int x; cin >> x;
	int a; cin >> a;
	int b; cin >> b;
	bool ok = true;
	for (size_t i = 1; i < n; i++)
	{
			cin >> a >> b;
		if ( a == x or a == 7 - x or b == x or b == 7 - x ) {
			ok = false;
			break;
		}

	}
	cout << (ok ? "YES" : "NO") << '\n';	
   }

   return 0;
}