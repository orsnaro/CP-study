
// https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=false


// #include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define Txtio   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);

#define F first
#define S second
using ll = long long;
using ull = unsigned long long;
const ll LM = LONG_LONG_MAX;
const int N = 2e5 + 5, M = INT32_MAX;

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		map<int , vector<int>> mp;
		int n , q; cin >> n >> q;
		for (int i = 0; i < n; i++)
		{
			int sz; cin >> sz;
			for (int j = 0; j < sz; j++)
			{
				int tmp; cin >> tmp;
				mp[i].push_back(tmp);
			}
		}
		for (int i = 0; i < q; i++)
		{
			int a, b; cin >> a >> b;
			cout << mp[a][b]  << '\n';
		}
	}


	return 0;  
}
