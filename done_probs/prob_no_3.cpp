

// https://www.codechef.com/START98D/problems/BLDST



#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5 + 5, M = INT_MAX;
const ll LM= LONG_LONG_MAX;
// int arr[N];


int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   cin >> t;
   while (t--) {
		int n , m; cin >> n >> m;
		
		ll sum = 0;
		for (int  i = 0; i < m; i++){
			int tmp; cin >> tmp;
			sum += tmp;
		}

		int x = sum / n;
		int y = x + (sum % n == 0 ? 0 : 1);
		if ( y % m == 0)
			cout << (sum % n == 0 ? (sum / m) : (sum % n) ) << '\n';
		else
			cout << 0 << '\n';
		
   }

   return 0;
}