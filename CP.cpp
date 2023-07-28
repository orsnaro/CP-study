


// https://codeforces.com/contest/1204/problem/A


#include <bits/stdc++.h>
// #include <stdio.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);

#define F first
#define S second
using ll = long long;
using ull= unsigned long long;
const ll LM= LONG_LONG_MAX;
const int N = 2e5 + 5, M = INT32_MAX;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio; // disable with 'printf() , scanf()'
   int t = 1;
   // cin >> t;

   while (t--) {
		string bts; cin >> bts;
		int sz = bts.size();
		if ( sz == 1 and bts == "0"){
			cout << 0 << '\n';
			continue;
		}

		int ans = 0;
		if ( sz <= 60 ){
			double tmp =  log10(stoull(bts, nullptr , 2))/log10(4) ;
			ans = ceil(tmp);
			cout << ans << '\n';
		}else{
			string bts_h = bts.substr(0 , 60);
			string bts_l = bts.substr(60);
			cout << bts_h << "    " << bts_l;
			ull x = stoull(bts_l , nullptr , 2);
			ull y = stoull(bts_h , nullptr , 2);
			double tmp =  ( log10(x) + log10(y) ) / log10(4) ;
			ans = ceil(tmp);
			cout << ans << '\n';
		}
   }
   return 0;
}