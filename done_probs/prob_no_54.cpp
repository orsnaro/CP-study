  
// https://www.codechef.com/problems/WARRIORCHEF
//tot time 35m ~












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

bool is_ok  ( int h ,  int x  , int n){
	bool flag = 1; //true

	for ( int i = 0; i < n; i++ ){
		if ( arr[i] <= x ) continue;
		if (  h - arr[i] <= 0){ flag = false; break;}
		else h -= arr[i];
	}
	return flag;
}

int main(void) {
	// Txtio;
   fastio; // disable fastio when using 'printf() , scanf()'
   int t = 1;
   cin >> t;
   while (t--) {
		int n , s; cin >> n >> s;
		int mx = -1;
		for (size_t i = 0; i < n; i++){
			cin >> arr[i];
			mx = max(mx , arr[i]);
		}
		
		int l = 0;
		int h = mx;	
		int mn = INT32_MAX;

		while ( l < h ){
			int m = (l + h + 1) / 2;

			if ( h - l <= 4) {
				for ( int i = h; i >= l; i-- )
					if ( is_ok( s  , i , n ) ){
						mn  = min( i , mn );
					}
				break;
			}

			if ( !is_ok(s , m , n) ) l = m + 1;
			else{
				mn  = min( m , mn );
				h = m - 1;
			}
		}
		cout << mn << '\n';

		
	}     
	return 0;  
}
