// prob: https://www.codechef.com/START95D/problems/MOONSOON
#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
   ios_base::sync_with_stdio(false);                                           \
   cin.tie(nullptr);                                                           \
   cout.tie(nullptr);
#define F first
#define S second
using ll = long long;
const int N = 1e5, M = 1e8;

int main(void) {
   // freopen("in.txt","r",stdin);
   fastio;

   int t = 1;
   cin >> t;

   while (t--) {
		int arr[N]=  {};
		int arr2[N] = {};
		int n , m , h; cin >> n >> m >> h; //no cars no outlets no hours
		
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		for(int i = 0; i < m; i++)
			cin >> arr2[i];
		
		sort ( arr , arr + n , greater<int>());
		sort ( arr2 , arr2 + m , greater<int>());
		int no = min ( n , m );
		int tot  = 0;
		for ( int i = 0; i < no; i++ ){
			int sum1 = arr[i];
			int sum2 = arr2[i] * h;
			tot += min(sum1 , sum2);
		}
		cout << tot << '\n';
   }

   return 0;
}