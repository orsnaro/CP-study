// https://codeforces.com/contest/1873/problem/B
// tot time ~ 8min










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
   cin >> t;
   while (t--) {
		int n; cin >> n;
		int mn = M;
		int imn = -1;
		for (size_t i = 0; i < n; i++){
			cin >> arr[i];
			if ( arr[i] <= mn ){
				mn = arr[i];
				imn = i;
			}
		}
		arr[imn]++;
		int ans = 1;
		for (size_t i = 0; i < n; i++)
			ans *= arr[i];
		
		cout << ans << '\n';

	}     
	return 0;  
}