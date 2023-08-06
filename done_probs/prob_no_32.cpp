// https://codeforces.com/problemset/problem/1742/E
// 3m read 26m think 20m coding - 3rd submit (first two was linear search TLE) - alone







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
const int N = 2e6 + 5, M = INT32_MAX;
int arr[N];
int main(void) {
	// Txtio;
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n , q; cin >> n >> q;
		map<int,int>mp; // handle when k == 0
		ll prfx[n];
		int mx = -1;
		for ( int i = 0; i < n; i++)
		{
			cin >> arr[i];
			mx = max(mx , arr[i]);
			mp[mx] = i;
		}
		prfx[0] = arr[0];
		for (int i = 1; i < n; i++)
			prfx[i] = prfx[i-1] + arr[i];

		for (int i = 0; i < q; i++)
		{
			int tmp; cin >> tmp;
			if (!tmp){ cout << 0 <<' '; continue;}
			auto iter = mp.upper_bound(tmp);

			if( iter != mp.begin())
				cout << prfx[((--iter)->S)] << ' ';
			else 
				cout << 0 << ' ';
		}
		cout << '\n';
		

   }     
	return 0;  
}

