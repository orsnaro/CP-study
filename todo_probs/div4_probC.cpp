// prob: https://codeforces.com/contest/1843/problem/C (joined last 24 min)
#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e6, M = 1e8;
// int arr[N];

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;

   int t = 1;
   cin >> t;

   while (t--) {
		ll n; cin >> n;
		ll sum = n;
		double lv = log(n + 1) / log(2);
		if ( double(int(lv)) != lv) lv = int(lv);
		else lv --;
		
		if ( lv == 0 ) {
			cout << 1 << '\n'; continue;
		}
		
		
		while ( int(lv) >= 1){
			ll diff = pow(2, (lv + 1)) - 1 - n;
			n = pow(2 , lv) - 1 - diff + (lv - 1); 
			sum += n;
			if (n ^ 1 == n + 1) n ++;
			lv --;
		}
 


		cout << sum + 1<< '\n';
   }

   return 0;
}