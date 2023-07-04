// prob: 
// https://codeforces.com/contest/567/problem/A
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
// int arr[N];
ll arr[2*N + 10];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
	


   while (t--) {
		int n; cin >> n;
		for (size_t i = 0; i < n; i++) cin >> arr[i];

		cout << abs(arr[0] - arr[1])  << ' ' << abs(arr[0] - arr[n-1]) << '\n'; // mini maxi
		for (size_t i = 1; i < n - 1; i++) {//its always ASC could leave the abs()
			int mn = min( abs(arr[i] - arr[i-1]) , abs(arr[i] - arr[i+1]) );
			int mx = max( abs(arr[i] - arr[n-1]) , abs(arr[i] - arr[0]) );
			cout << mn << ' ' << mx << '\n';
		}
		// cout and directly avoid OF
		cout << abs(arr[n-1] - arr[n-2]) << ' ' << abs(arr[n-1] - arr[0]) << '\n';

		
   }

   return 0;
}