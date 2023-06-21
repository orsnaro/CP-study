// prob: https://www.codechef.com/START95D/problems/DOREWARD
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
		int x ; cin >> x;

		if ( x <= 3 ) cout << "BRONZE" << '\n';
		if ( x > 3 and x <= 6 ) cout << "SILVER" << '\n';
		if ( x > 6  ) cout << "GOLD" << '\n';

   }

   return 0;
}