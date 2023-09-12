// https://codeforces.com/contest/770/problem/A



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
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		int k; cin >> k;

		string sub;
		string ans;
		for (int i = 0; i < k; i++){
			const char c = 'a' + i;
			sub += c;
		}

		int ful = (n / k);
		int r   = n % k;

		while ( ful-- ) cout << sub;
		for (size_t i = 0; i < r; i++) cout << sub[i];
		
		cout << '\n';
   }     
	return 0;  
}
