// prob: https://codeforces.com/contest/268/problem/A
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

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		vector <int> freqa(N , 0) , freqb(N , 0);
		for (size_t i = 0; i < n; i++)
		{
			pair<int , int> tmp; cin >> tmp.F >> tmp.S;
			freqa[tmp.F]++; freqb[tmp.S]++;
		}
		int sz = freqa.size();
		int ans = 0;
		for (size_t i = 0; i < sz ; i++)
		{
			if ( freqa[i] > 0 and freqb[i] > 0)
				ans += max (freqa[i] , freqb[i]) * min(freqa[i] , freqb[i]);
		}
		cout << ans << '\n';

   }

   return 0;
}