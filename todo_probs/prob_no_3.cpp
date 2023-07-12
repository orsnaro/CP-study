


//TODO: https://codeforces.com/contest/810/problem/B?mobile=false



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
priority_queue < pair< pair <ll , ll> , bool > > pq; // k , l , 0 if min is k else 1

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;
   int t = 1;
   // cin >> t;
   while (t--) {
		int n , f; cin >> n >> f;
		for (int i = 0; i < n; i++)
		{
			int k , l; cin >> k >> l;
			if ( k < l and (k != 0 or l != 0) )
				pq.emplace({{k , l} , 0 });
			else
				pq.emplace({{l , k} , 1 }) ;

		}
		int ans = 0;
		if (f != 0 ){
			for (int i = 0; i < n; i++)
			{
				// we gurantee from first loop that all of them dont have either 0 product or - customer
				// apply f ( sell out) on days that has max(min(product_i , customer_i))  [top of pq]
			}

		}else{
			// just add them according to minimum

		}
		
		

   }

   return 0;
}