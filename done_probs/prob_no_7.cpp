
// https://www.codechef.com/START99D/problems/MOZZ








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
		int x , y , r; cin >> x >> y >> r;
		int ans = 0;
		int fextra = r/30;
		int p1 =fextra / y;
		int r1 = fextra % y;
		int p2 = x / y;
		int r2 = x % y;

		ans = p1 + p2;
		if ( r1 + r2 > y){
			ans += 2;
		}else if ( r1 + r2 != 0 ){
			ans += 1;
		}
		cout << ans << '\n';
   }
   return 0;
}