// prob: https://codeforces.com/contest/236/problem/A

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
		set <char> st;
		string tmp; cin >> tmp;
		for ( auto &c : tmp) st.insert(c);
		cout << (st.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << '\n';
   }

   return 0;
}