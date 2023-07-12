
// https://codeforces.com/contest/740/problem/C






#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5, M = INT_MAX;
const ll llm = LONG_LONG_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n , m; cin >> n >> m;
		ll mn = llm; // min interval is also maximum possible mes that is min between all sub arr mexes
		for (int  i = 0; i < m; i++){
			int tmp1 , tmp2; cin >> tmp1 >> tmp2;
			mn = min(mn , ll(tmp2 - tmp1 + 1) );
		}
		cout << mn << '\n';
		for (int i = 0 , j= 0; i < n; i++ , j++){
			if (j == mn)j = 0;
			
			cout << j << ' ';
		}

   }

   return 0;
}