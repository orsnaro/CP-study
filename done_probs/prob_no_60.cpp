// https://www.codechef.com/problems/STOCKMARKET
//joined at last 13 min solved 3 XD







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
// int arr[N];
bool ok( ll h , int x , vector<int> &v ){
	ll sm = 0;
	for ( auto &t : v )
		sm += max ( 0ll  , h - t );
	
	bool ok;
	sm > x ? ok = false : ok = true;
	return ok;
}

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int x; cin >> x;
	    int mn = INT_MAX;
	    long long s = 0;
	    for(int i = 0 ; i < x ; i++){
	        int tmp; cin >> tmp;
	        mn = min( mn , tmp);
	        s += tmp;
	        
	    }
	    cout << s-mn << '\n';
	}     
	return 0;  
}
