// prob: https://codeforces.com/contest/136/problem/A
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
		int freq [n] = {};
		for (size_t i = 1; i <=n; i++)
		{
			int tmp; cin>> tmp;
			freq[tmp - 1] = i;
		}
		for ( int x : freq) cout << x << ' ';
		cout << '\n';
   }

   return 0;
}//done 