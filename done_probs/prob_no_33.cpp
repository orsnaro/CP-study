// https://acm.timus.ru/problem.aspx?space=1&num=1349






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
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;
   while (t--) {
		int n; cin >> n;
		if(n == 1) cout << 1 << ' ' << 2 << ' ' << 3;
		if(n == 2) cout << 3 << ' ' << 4 << ' ' << 5;
		if(n > 2 or n == 0) cout << -1 ;
   }     
	return 0;  
}

