


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
using ull = unsigned long long;
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
		if ( (sz - 1) % 2 == 0 ){
			if ( bts.find('1'  ,  1) != -1){
				cout << (sz + 1)/2 << '\n';
			}else{
				cout << sz /2 << '\n';
			}
		}else{
			cout << (sz+1) / 2 << '\n';
		}

   }
   return 0;
}