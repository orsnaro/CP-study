


//https://codeforces.com/contest/810/problem/B?mobile=false



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
priority_queue < pair < ll , pair <ll , ll> > > pq1; // k , l -> k is min
priority_queue < pair <ll , ll> > pq2; // k , l -> l is min
priority_queue < pair <ll , ll> > pq3; // k , l -> l is min


struct pairComp {// comapare k if equal -> compar on diff (l-k)
  bool operator()(const pair<long long, long long>& a, const pair<long long , long long>& b) {
    if (a.first != b.first) {
      return a.first > b.first;
    } else {
      return a.second - a.first > b.second - b.first;
    }
  }
};


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
			if ( k != 0 and l != 0){
				if ( k < l )
					pq1.push( { min( 2*k , l) - k , {k , l} } );
				else if ( k == l)
					pq3.push({k , l}) ;
				else
					pq2.push({l , k}) ;
			}
		}
		ll ans = 0;
		while (!pq3.empty()){
			ans += pq3.top().F;
			pq3.pop();
		}

		if (f != 0 ){
			while( !pq1.empty() ){
				if ( f != 0 ){
					ans += min( 2*pq1.top().S.F , pq1.top().S.S );
					f--;
					pq1.pop();
				}else{
					ans += pq1.top().S.F;
					pq1.pop();
				}
			}
			while( !pq2.empty() ){
					ans += pq2.top().F;
					pq2.pop();
			}

		}else{
			while ( !pq1.empty()){
				ans += pq1.top().S.F;
				pq1.pop();
			}
			while ( !pq2.empty()){
				ans += pq2.top().F;
				pq2.pop();
			}
		}
		cout << ans << '\n';
		

   }

   return 0;
}