
// https://codeforces.com/contest/520/problem/A


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
vector <ll> v;
map <ll , int> mp;

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		set <char> st;
		for (size_t i = 0; i < n; i++)
			st.insert(tolower(s[i]));
		
	 	cout << (st.size() >= 26 ? "YES" : "NO") << '\n';
   }

   return 0;
}