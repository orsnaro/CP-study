//   https://codeforces.com/contest/1873/problem/A












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
   while (t--) {
		string s; cin >> s;
		int cnt = 0;

		for (size_t i = 0; i < 3; i++)
			s[i] == 'a' + i ? cnt++ : cnt=cnt;
		
		cout << (cnt > 0 ? "yes\n" : "no\n") ;

	}     
	return 0;  
}
