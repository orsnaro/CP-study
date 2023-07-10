
// https://codeforces.com/contest/265/problem/A





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
		string s , t ; cin >> s >> t;
		deque <char>  st1 ,st2 ;

		int ssz = s.size();
		int tsz = t.size();

		for (int i = 0; i < ssz; i++)st1.push_back(s[i]);
		for (int i = 0; i < tsz; i++)st2.push_back(t[i]);

		int ans = 1;
		while ( !st2.empty() ){

			if ( st1.front() == st2.front() ){
				st1.pop_front();
				ans ++;
			}

			st2.pop_front();
		}
		cout << ans << '\n';

   }

   return 0;
}