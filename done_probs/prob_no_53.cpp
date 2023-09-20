  



// https://www.codechef.com/START101D/problems/LPC
// time tot 32











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
		int n , m; cin >> n >> m;
		string s , k; cin >> s >> k;
		int sz1 = s.size();
		int sz2 = k.size();
		int ans = M;
		for( int i = 0; i <= sz1 - sz2; i++ ){
			int tmp = 0;
			for( int j = 0; j < sz2; j++)
				if ( int(abs( s[i + j] - k[j] )) > 5 )
					tmp +=  10 - int(abs( s[i + j] - k[j] )) ;
				else 
					tmp +=  int(abs( s[i + j] - k[j] )) ;
				
			ans = min  ( ans ,  tmp );
		}
		cout << ans << '\n';
	}     
	return 0;  
}
