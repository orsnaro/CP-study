// https://codeforces.com/contest/1873/problem/D
// tot time ~ 20min







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
// int arr[N];


int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {//can be done in one loop (not worth it (string insertion and ans in on loop))
		int n , k; cin >> n >> k;
		string s;
		cin >> s;
		
		int ans = 0 ;
		for (int i = 0; i < n; )
			if ( s[i] == 'B' ){ ans++; i += k;}
			else i++;

		cout << ans << '\n';
	}     
	return 0;  
}