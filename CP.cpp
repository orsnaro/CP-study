


// https://codeforces.com/contest/1858/problem/B






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
int v[N];

int main(void) {
	// Txtio;
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n , m , d; cin >> n >> m >> d;
		ll c_cnt = 0;
		ll s_cnt = 0;

		cin >> v[0];
		if (v[0] == 1)
			c_cnt = m;
		else c_cnt = m + 1;

		if ( ((v[0] - 1  - 1)  / d) > 0 ){
			c_cnt += ((v[0] - 1)  - 1)  / d;
		}else{
			s_cnt ++;
		}

		for (int i = 1; i < m; i++)
		{
			cin >> v[i];
			int ans = ((v[i]-1) - v[i - 1]) / d;
			if ( ans > 0 ){
				c_cnt += ans;
			}else{
				s_cnt ++;
			}

		}

		if ( s_cnt == 0){s_cnt = m; cout << c_cnt << ' ' << s_cnt << '\n';}
		else {cout << c_cnt - 1 << ' ' << s_cnt << '\n';}

		

   }     
	return 0;  
}

